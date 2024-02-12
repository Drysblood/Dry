// HPP includes!
#include "taschenrechner.hpp"
#include "menu.hpp"
//
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

Taschenrechner::Taschenrechner()
{

    // Konstruktor
    // OOB List
}

void Taschenrechner::showCalc()
{
    system("cls");
    menu m;
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t    +----------------------+\n";
    cout << "\t\t\t\t\t    | -> TASCHENRECHNER <- |\n";
    cout << "\t\t\t\t\t    +----------------------+\n\n";
    cout << "\n\n\n";
    cout << "\t\t[ 1 ] Addition\n";
    cout << "\t\t[ 2 ] Subtraktion\n";
    cout << "\t\t[ 3 ] Multiply\n";
    cout << "\t\t[ 4 ] Divide\n";
    cout << "\t\t[ 5 ] Prozent\n";
    cout << "\t\t[ 6 ] Wurzel ziehen\n";
    cout << "\t\t[ 7 ] Sinus(Winkel)\n";
    cout << "\t\t[ 9 ] BACK from menu \n";

    char calcChoice = _getch();
    while (!_kbhit())
    {
        switch (calcChoice)
        {
        case '1':
            addition(0, 0);
            break;

        case '2':
            subtraktion(0, 0);
            break;

        case '3':
            multiply(0, 0);
            break;

        case '4':
            divide(0, 0);
            break;
        case '5':
            prozente(0, 0);
            break;
        case '6':
            Wurzel(0, 0);
            break;
        case '7':
            Winkel();
            break;
        case '9':
            m.showMenu();
            break;

        default:
            cout << "Falsche Eingabe\n";
            break;
        }
        _getch();
        system("cls");
    }
}

int Taschenrechner::addition(double num1, double num2)
{
    system("cls");

    char input;
    bool addRun = true;

    while (addRun)
    {

        cout << "\n\n\n";
        cout << "\t\t\t\t\t    +----------------------+\n";
        cout << "\t\t\t\t\t    |    ->  ADDITION  <-  |\n";
        cout << "\t\t\t\t\t    +----------------------+\n\n";
        cout << "\n\n\n";
        cout << "\tGeben Sie bitte Ihre erste Zahl an: ";
        cin >> num1;
        cout << "\n\tGeben Sie bitte Ihre zweite Zahl an: ";
        cin >> num2;
        cout << " \n\t" << num1 << " + " << num2 << " betreagt : " << num1 + num2 << " \n";
        cout << "\n\n\t     Wollen Sie fortfahren?\n\t'y' for continue / 'n' for exit\n";
        input = _getch();
        system("cls");
        if (input == 'n')
        {
            addRun = false;
            showCalc();
        }
    }
    return num1;
}
int Taschenrechner::subtraktion(double num1, double num2)
{
    system("cls");

    char input;
    bool subRun = true;

    while (subRun)
    {

        cout << "\n\n\n";
        cout << "\t\t\t\t\t    +----------------------+\n";
        cout << "\t\t\t\t\t    |   -> SUBTRAKTION <-  |\n";
        cout << "\t\t\t\t\t    +----------------------+\n\n";
        cout << "\n\n\n";
        cout << "\tGeben Sie bitte Ihre erste Zahl an: ";
        cin >> num1;
        cout << "\n\tGeben Sie bitte Ihre zweite Zahl an: ";
        cin >> num2;
        cout << " \n\t" << num1 << " - " << num2 << " betreagt : " << num1 - num2 << " \n";
        cout << "\n\n\t     Wollen Sie fortfahren?\n\t'y' for continue / 'n' for exit\n";
        input = _getch();
        system("cls");
        if (input == 'n')
        {
            subRun = false;
            showCalc();
        }
    }
    return num1;
}
int Taschenrechner::multiply(double num1, double num2)
{
    system("cls");

    char input;
    bool multRun = true;

    while (multRun)
    {

        cout << "\n\n\n";
        cout << "\t\t\t\t\t    +----------------------+\n";
        cout << "\t\t\t\t\t    |    ->  MULTIPLY  <-  |\n";
        cout << "\t\t\t\t\t    +----------------------+\n\n";
        cout << "\n\n\n";
        cout << "\tGeben Sie bitte Ihre erste Zahl an: ";
        cin >> num1;
        cout << "\n\tGeben Sie bitte Ihre zweite Zahl an: ";
        cin >> num2;
        cout << " \n\t" << num1 << " * " << num2 << " betreagt : " << num1 * num2 << " \n";
        cout << "\n\n\t     Wollen Sie fortfahren?\n\t'y' for continue / 'n' for exit\n";
        input = _getch();
        system("cls");
        if (input == 'n')
        {
            multRun = false;
            showCalc();
        }
    }
    return num1;
}
int Taschenrechner::divide(double num1, double num2)
{
    system("cls");

    char input;
    bool divRun = true;

    while (divRun)
    {

        cout << "\n\n\n";
        cout << "\t\t\t\t\t    +----------------------+\n";
        cout << "\t\t\t\t\t    |    ->   DIVIDE  <-   |\n";
        cout << "\t\t\t\t\t    +----------------------+\n\n";
        cout << "\n\n\n";
        cout << "\tGeben Sie bitte Ihre erste Zahl an: ";
        cin >> num1;
        cout << "\n\tGeben Sie bitte Ihre zweite Zahl an: ";
        cin >> num2;
        cout << " \n\t" << num1 << " / " << num2 << " betreagt : " << num1 / num2 << " \n";
        cout << "\n\n\t     Wollen Sie fortfahren?\n\t'y' for continue / 'n' for exit\n";
        input = _getch();
        system("cls");
        if (input == 'n')
        {
            divRun = false;
            showCalc();
        }
    }
    return num1;
}
int Taschenrechner::prozente(double a, double b)
{
    char input;
    long double _result = fmod(a, b);

    cout << "\n\n\n";
    cout << "\t\t\t\t\t    +----------------------+\n";
    cout << "\t\t\t\t\t    |    ->   MODULE   <-  |\n";
    cout << "\t\t\t\t\t    +----------------------+\n\n";
    cout << "\n\n\n";
    cout << "\tGeben Sie bitte Ihre erste Zahl an: ";
    cin >> a;
    cout << "\n\tGeben Sie bitte Ihre zweite Zahl an: ";
    cin >> b;
    if (b != 0.0)
    {
        double result = fmod(a, b);
        std::cout << "\n\t" << a << " geteilt durch " << b << " ist " << result << std::endl;
    }
    else
    {
        std::cout << "Division durch Null ist nicht erlaubt." << std::endl;
    }
    input = _getch();
    system("cls");
    if (input == 'n')
    {
        showCalc();
    }
    return 0.0;
}
int Taschenrechner::Wurzel(double number, double _sqrt)
{

    system("cls");

    char input;
    bool addRun = true;

    while (addRun)
    {

        cout << "\n\n\n";
        cout << "\t\t\t\t\t    +----------------------+\n";
        cout << "\t\t\t\t\t    |    ->   WURZEL   <-  |\n";
        cout << "\t\t\t\t\t    +----------------------+\n\n";
        cout << "\n\n\n";
        cout << "\tGeben Sie eine positive Zahl ein: ";
        cin >> number;
        // Überprüfen, ob die eingegebene Zahl positiv ist
        if (number >= 0)
        {
            // Quadratwurzel der eingegebenen Zahl berechnen
            _sqrt = sqrt(number);

            // Ergebnis ausgeben
            std::cout << "\n\n\tDie Quadratwurzel von " << number << " ist " << _sqrt << std::endl;
        }
        else
        {
            // Fehlermeldung ausgeben, wenn die eingegebene Zahl negativ ist
            std::cout << "\n\n\t     Fehler: Die eingegebene Zahl muss positiv sein." << std::endl;
        }

        cout << "\n\n\t     Wollen Sie fortfahren?\n\t'y' for continue / 'n' for exit\n";
        input = _getch();
        system("cls");
        if (input == 'n')
        {
            addRun = false;
            showCalc();
        }
    }

    return 0.0;
}
int Taschenrechner::Winkel()
{

    system("cls");

    char input;
    bool addRun = true;
    double angle_degress; // Winkel in Grad
    double angle_radians; // Winkel in Radiant
    double sin_value;     // Sinuswert
    while (addRun)
    {

        cout << "\n\n\n";
        cout << "\t\t\t\t\t    +----------------------+\n";
        cout << "\t\t\t\t\t    |    ->   WINKEL   <-  |\n";
        cout << "\t\t\t\t\t    +----------------------+\n\n";
        cout << "\n\n\n";
        cout << "\tGeben Sie den Winkel in Grad ein: ";
        cin >> angle_degress;
        // Überprüfen, ob die eingegebene Zahl positiv ist
        // Umwandeln des Winkels von Grad in Radiant
        angle_radians = angle_degress * (3.14159265358979323846 / 180.0);

        // Berechnung des Sinuswerts
        sin_value = sin(angle_radians);

        // Ausgabe des Sinuswerts
        std::cout << "\tSinus(" << angle_degress << " Grad) = " << sin_value << std::endl;

        cout << "\n\n\t     Wollen Sie fortfahren?\n\t'y' for continue / 'n' for exit\n";
        input = _getch();
        system("cls");
        if (input == 'n')
        {
            addRun = false;
            showCalc();
        }
    }

    return 0;
}
