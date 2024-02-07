#include "brutto.hpp"
#include "menu.hpp"


void brutto::showBrutto(){
menu m;

system("cls");
    while(1){
    cout << "\t\t\t\t\t    +---------------------+\n";
	cout << "\t\t\t\t\t    | -> BRUTTORECHNER <- |\n";
	cout << "\t\t\t\t\t    +---------------------+\n";
    cout << "\n\n\n";
	cout << "\t\tGib dein Nettogehalt an: ";
    cin >> netto;
    double VAT = netto * 0.19;
    brutto = netto + VAT;


    cout << "\n\t\tDas Bruttogehalt betraegt: " << brutto << " EUR";
    cout << "\n\t\tDer Mehrwertsteuerbetrag betraegt: " << VAT << " EUR";
    cout << "\n\t\tWollen Sie weitere Gehaelter nach rechnen?";
    cout << "\n\t\t(j/n)\n";
    brChoice = _getch();
    _getch();
    if(brChoice == 'n'){
        m.showMenu();
    }

    cout << "\n\n\n\n";
    }

}