#include "menu.hpp"
#include "taschenrechner.hpp"
#include "brutto.hpp"
#include "kontakt.hpp"
#include "spiele.hpp"
#include "snake.hpp"
#include "information.hpp"
//
#include <list>


int menu::showMenu(){
    Taschenrechner tr;
    brutto Brutto;
	Contactmenu cm;
    Spiele spiele;
	Snake snake;
	Infos infos;
	while(!_kbhit()){
	cout << "\n\t\t\t\t\t+--------------------------------+\n";
	cout << "\t\t\t\t\t|          Dry's Console         |\n";
	cout << "\t\t\t\t\t|        Programm v. 0.3.2       |\n";
	cout << "\t\t\t\t\t+--------------------------------+\n";
	cout << "\n\n\n\n";
	cout << "\t\t\t\t\t\t +------------+\n";
	cout << "\t\t\t\t\t\t | -> MENU <- |\n";
	cout << "\t\t\t\t\t\t +------------+\n";
	cout << "\n\n\n";
	cout << "\t\t[ 1 ] Taschenrechner\n";
    cout << "\t\t[ 2 ] Bruttorechner\n";
    cout << "\t\t[ 3 ] Addressbuch\n";
    cout << "\t\t[ 4 ] Spiele\n";
    cout << "\t\t[ 5 ] Informationen\n";
    

    cout << "\t\t[ 7 ] EXITING\n\n";
			char mChoice = _getch();

            cout << "Sie haben die " << mChoice << " gewaehlt!\n";

			Sleep(1700);

			switch (mChoice) {
				case '1':
					tr.showCalc();
					break;
				case '2':
					Brutto.showBrutto();
				case '3':
				cm.loadContactsFromFile();
				cm.showDisplay();
				case '4':
				spiele.showGames();
				case '5':
				infos.showInfos();
				break;
                case '7':
				exit(0);
				break;
				default:
					cout << "Falsche Eingabe!\n";
				}
	
        } 

    return 0;
}