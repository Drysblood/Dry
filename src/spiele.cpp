#include "spiele.hpp"
#include "snake.hpp"


Spiele::Spiele(){

}

void Spiele::showGames(){
    system("cls");
     Snake snake;
    // Zeige alle Spiele in der Liste            
    cout << "\n\t\t[ 1 ] Snake";
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

            break;
            default:
            std::cout << "Falsche Eingabe!\n";
        }
    std::cout << "\n\n";
}
