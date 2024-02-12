#include "spiele.hpp"
#include "snake.hpp"
#include "fight.hpp"


Spiele::Spiele(){}

void Spiele::showGames(){

    Snake snake;
    Fighting fi;
    cout << "\n\n\n\n";
	cout << "\t\t\t\t\t\t +-------------+\n";
	cout << "\t\t\t\t\t\t | -> GAMES <- |\n";
	cout << "\t\t\t\t\t\t +-------------+\n";
    cout << "\n\n\n\n";
    // Zeige alle Spiele in der Liste            
    cout << "\n\t\t[ 1 ] Snake";
    cout << "\n\t\t[ 2 ] Fighting";
    cout << "\n";
    cout << "\n\n";

        char sChoice = _getch();
        switch(sChoice){
            case '1':
            snake.setup();
            while(!snake.gameOver)
            {
                snake.draw();
                snake.input();
                snake.logic();
                Sleep(50);
            }
            showGames();
            break;
            case '2':
            fi.playMenu();
            while(1){
			fi.play();
            }
            showGames();
            default:
            std::cout << "Falsche Eingabe!\n";
        }
    system("cls");
}
