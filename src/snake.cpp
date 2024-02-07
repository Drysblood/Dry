#include "snake.hpp"
#include <windows.h>

Snake::Snake(){
    system("cls");
}

void Snake::setup(){
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    nTail = 0;
    score = 0;
}

void Snake::draw(){
    static HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    static COORD cursorPosition;

    // Set cursor to (0, 0) to avoid flickering
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(hConsole, cursorPosition);

    for (int i = 0; i < width + 2; i++) // Außenlinie in der Breite oben
        cout << "~"; // Obere Linie
        cout << endl;
        for(int i = 0; i < height; i++) // Außenlinie links & rechts
        {
            for(int j = 0; j < width; j++)
            {
                if(j == 0)
                    cout << "|"; // Linker Rand
                    if(i == y && j == x)
                    cout << "@"; // snake Kopf
                    else if(i == fruitY && j == fruitX)
                    cout << "F"; // Fruit
                    else{
                        bool print = false;
                        for (int k = 0; k < nTail; k++){
                            if(tailX[k] == j && tailY[k] == i) 
                            {
                                cout << "o"; // Nach dem essen
                                print = true;
                            }
                        }
                        if (!print)
                            cout << " ";
                    }
                    if (j == width - 1)
                    cout << "|"; // Rechter Rand
            }
            cout << endl;
        }
        for(int i = 0; i < width +2; i++)
        cout << "~"; // untere Linie
        cout << endl;
        cout << "Score: " << score << endl;
}

void Snake::input(){
    if(_kbhit()){
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Snake::logic(){
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;

    if (x == fruitX && y == fruitY)
    {
        score += 10; // + an Punkte dazu bekommen
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++; // Schlangenlänge
    }
}