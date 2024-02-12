#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <conio.h>

using namespace std;

struct Contact
{
    string title;
    string name;
    string phone;
    string email;
};

class Contactmenu
{
private:
    std::vector<Contact> contacts;

public:
    Contactmenu();
    void loadContactsFromFile();
    void saveContactsToFile();
    void addContact(const Contact &contact);
    int editContact(int index, const Contact &newContact);
    void deleteContact(int index);
    void displayContacts();
    void showDisplay();
};