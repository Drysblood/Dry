#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib> // Für die rand() und srand() Funktionen
#include <ctime>   // Für die time() Funktion
#include <windows.h>

using namespace std;

struct Player
{
    string uName;
    double weapon;
    double life = 100;
    double def = 50;
    double attack = 50;
};

struct Weapons
{
    double fist = 15;
    double knife = 15;
    double stick = 15;
};

struct Speed
{
    double fSpeed = 33;
    double kSpeed = 33;
    double sSpeed = 33;
    double attack = 33;
};

struct Enemy
{
    double life = 140;
    double def = 85;
    double attack = 50;
};

class Fighting
{
private:
public:
    Fighting();
    void playMenu();
    void play();
    void setup();
};