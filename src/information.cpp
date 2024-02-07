#include "information.hpp"


Infos::Infos(){}

void Infos::showInfos(){
    system("cls");
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t    +----------------------+\n";
    cout << "\t\t\t\t\t    | -> INFORMATIONEN  <- |\n";
    cout << "\t\t\t\t\t    +----------------------+\n\n";
    cout << "\n\n\n";
    do{
    cout << "\t\t\t\t\t     Hallo liebe Leser/in";
    cout << "\n\n\n";
    cout << "\t\t\tMein Name ist " << name << " und ich habe Anfang Dezember 2023 angefangen" << endl;
    cout << "\t\t\tmit C++, da ich schon immer Interesse an Programmieren hatte und mich        " << endl;
    cout << "\t\t\tnun mal ran getraut habe und ich habe tats""\x84""chlich mega Spa""\xe1"" dran, was        " << endl;
    cout << "\t\t\tich so niemals gedacht habe, klar es ist nicht gerade einfach aber man       " << endl;
    cout << "\t\t\tlernt ja sowieso nie aus! Ich komme aktuell aus " << wohnort << "und         " << endl;
    cout << "\t\t\tbin in " << gBoren << " am 24.09.1992 und bin Derzeit " << age << " Jahre alt!" << endl;
    cout << "\t\t\tMeine Interessen lagen schon immer im Computer-Bereich, fr""\x81""her                " << endl;
    cout << "\t\t\thaupts""\x84""chlich im Gaming Bereich, seit Anfang Dezember" << endl;
    cout << "\t\t\taber haupts""\x84""chlich in VSCODE!" << endl; 
    cin.get();   
    }while(!infoChoice);
}