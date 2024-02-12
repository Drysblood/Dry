#include "kontakt.hpp"
#include "menu.hpp"

menu m;

Contactmenu::Contactmenu()
{
}

void Contactmenu::saveContactsToFile()
{
    ofstream data("data.txt");
    if (data.is_open())
    {
        for (const Contact &contact : contacts)
        {
            data << contact.title << " " << contact.name << " " << contact.phone << " " << contact.email << "\n";
        }
        data.close();
    }
    else
    {
        cout << "Fehler beim Speichern der Kontakte.\n";
    }
}

int Contactmenu::editContact(int index, const Contact &newContact)
{
    if (index < 0 || index >= contacts.size())
    {
        std::cout << "Ungültige Kontaktnummer." << std::endl;
        return -1;
    }

    contacts[index] = newContact;
    saveContactsToFile();
    std::cout << "Kontakt wurde erfolgreich bearbeitet." << std::endl;
    return index;
}

void Contactmenu::addContact(const Contact &contact)
{
    contacts.push_back(contact);
    saveContactsToFile();
}

void Contactmenu::deleteContact(int index)
{
    std::cout << "\n\n";
    contacts.erase(contacts.begin() + index);
    saveContactsToFile(); // Füge diese Zeile hinzu, um die Kontakte zu speichern
}

void Contactmenu::displayContacts()
{
    system("cls");
    std::cout << "\n\n";
    std::cout << "\t\t\t-> Kontaktdaten <-\n\n\n\n";
    for (size_t i = 0; i < contacts.size(); ++i)
    {
        std::cout << "\t\tKontakt " << i + 1 << ":\n";
        std::cout << "\t\tTitel: " << contacts[i].title << "\n";
        std::cout << "\t\tName: " << contacts[i].name << "\n";
        std::cout << "\t\tTelefon: " << contacts[i].phone << "\n";
        std::cout << "\t\tE-Mail: " << contacts[i].email << "\n";
        std::cout << "\n\n\n";
    }
    std::cout << "Beliebige Taste zum Beenden!\n";
    char uChoice = _getch();
    _getch();
}

void Contactmenu::loadContactsFromFile()
{
    ifstream data("data.txt");
    if (data.is_open())
    {
        string line;
        while (getline(data, line))
        {
            istringstream ss(line);
            Contact contact;
            ss >> contact.title >> contact.name >> contact.phone >> contact.email;
            contacts.push_back(contact);
        }
        data.close();
    }
    else
    {
        cout << "Fehler beim Laden der Datei.\n";
    }
}

void Contactmenu::showDisplay()
{

    int choice;
    do
    {
        system("cls");
        std::cout << "\n\n\n\n";
        std::cout << "\t\t[ 1 ] Kontakt hinzuf\x81gen\n";
        std::cout << "\t\t[ 2 ] Kontakt bearbeiten\n";
        std::cout << "\t\t[ 3 ] Kontakt l\x94schen\n";
        std::cout << "\t\t[ 4 ] Kontaktliste anzeigen\n";
        std::cout << "\t\t[ 5 ] Beenden\n";
        std::cout << "Auswahl: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            std::string title, name, phone, email;
            std::cout << "\t\tTitel: ";
            std::cin >> title;
            std::cout << "\t\tName: ";
            std::cin >> name;
            std::cout << "\t\tTelefon: ";
            std::cin >> phone;
            std::cout << "\t\tE-Mail: ";
            std::cin >> email;
            addContact({title, name, phone, email});
            break;
        }
        case 2:
        {
            int index;
            std::cout << "Index des zu bearbeitenden Kontakts: ";
            std::cin >> index;
            // Sicherstellen, dass der Index im gültigen Bereich liegt
            if (index >= 0 && index < contacts.size())
            {
                std::string title, name, phone, email;
                std::cout << "\t\tNeuer Titel: ";
                std::cin >> title;
                std::cout << "\t\tNeuer Name: ";
                std::cin >> name;
                std::cout << "\t\tNeue Telefonnummer: ";
                std::cin >> phone;
                std::cout << "\t\tNeue E-Mail: ";
                std::cin >> email;
                editContact(index, {title, name, phone, email});
            }
            else
            {
                std::cout << "Ung\x81ltiger Index.\n";
            }
            break;
        }
        case 3:
        {
            int index;
            std::cout << "Index des zu l\x94schenden Kontakts: ";
            std::cin >> index;
            deleteContact(index);
            break;
        }
        case 4:
            displayContacts();
            break;
        case 5:
            saveContactsToFile();
            std::cout << "Programm beendet.\n";
            Sleep(1400);
            m.showMenu();
            break;
        default:
            std::cout << "Ung\x81ltige Auswahl.\n";
            break;
        }
    } while (!_kbhit());
}