#include <iostream>
#include <conio.h>
using namespace std;

class Infos
{

private:
    char infoChoice;
    bool infoRun = false;
    string name = ("Dominik S.");
    string wohnort = ("M\x94nchengladbach");
    string gBoren = ("Datteln");
    int age = 31;

public:
    Infos();
    void showInfos();
};