#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;


class Snake{
private:


    const int width = 25;
    const int height = 25;
    int x, y, fruitX, fruitY;
    int score;
    int tailX[100], tailY[100];
    int nTail;
    enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
    eDirection dir;

public:
    bool gameOver;
    Snake();
    void setup();
    void draw();
    void input();
    void logic();


};