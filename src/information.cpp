#include "information.hpp"

Infos::Infos() {}

void Infos::showInfos()
{
    system("cls");
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t    +----------------------+\n";
    cout << "\t\t\t\t\t    | -> INFORMATIONEN  <- |\n";
    cout << "\t\t\t\t\t    +----------------------+\n\n";
    cout << "\n\n\n";
    do
    {
        cout << "\t\t\t\t\t     Hallo liebe Leser/in";
        cout << "\n\n\n";
        cout << "\t\t\tMein Name ist " << name << " und bin 31 Jahre alt, ich habe Anfang" << endl;
        cout << "\t\t\tDezember 2023 mit C++ angefangen. Sie fragen sich wahrscheinlich,         " << endl;
        cout << "\t\t\twarum C++ und keine andere Sprache? Mir gef"
                "\x84"
                "llt die Syntax        "
             << endl;
        cout << "\t\t\tbei C++ und den Gedanke, dass man dort mit so vielen Frameworks      " << endl;
        cout << "\t\t\tArbeiten kann! Meine Interessen lagen schon immer im Computerbereich,          " << endl;
        cout << "\t\t\tfr"
                "\x81"
                "her war es haupts"
                "\x84"
                "chlich das Gaming, heute mit sehr viel Spa"
                "\341"
                ",\n\t\t\tdas Programmieren in C++!"
             << endl;
        cin.get();
    } while (!infoChoice);
}