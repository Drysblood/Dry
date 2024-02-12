#include "fight.hpp"
#include "menu.hpp"
Fighting::Fighting()
{

    Enemy enemy;
    enemy.attack = rand() % 35 + 35;
    Player player;
    player.weapon = rand() % 15 + 15;
    player.attack = rand() % 51 + 20;
    Speed speed;
    speed.fSpeed = rand() % 35 + 20;
    speed.kSpeed = rand() % 75 + 11;
    speed.sSpeed = rand() % 25 + 35;
    speed.attack = rand() % 25 + 15;
}

void Fighting::playMenu()
{
    menu m;
    system("cls");
    cout << "\n\n\n\n";
    cout << "\n[ 1 ] Play Game";
    cout << "\n[ 2 ] Back from menu";
    cout << "\n";

    if (_getch() == '2')
    {
        m.showMenu();
    }
}

void Fighting::play()
{
    Player player;
    Weapons weap;
    Enemy enemy;
    Speed speed;
    system("cls");
    srand(time(nullptr));
    cout << "\n\nGib dein Benutzername an: ";
    getline(cin, player.uName);
    cout << "\nDer Benutzername lautet: " << player.uName << " ist dies korrekt?\n";
    cout << "\ty(j/n)n\n";
    char fChoice = _getch();
    if (fChoice == 'y')
    {
        cout << "\n\n\t\tViel Spass!";
    }
    else
    {
        cout << "\nGib dein Benutzername an: ";
        getline(cin, player.uName);
    }
    system("cls");
    cout << "\n\n\t\t\tWillkommen im Kampf-Modus!";
    cout << "\n\n\n\tSie haben die m"
            "\x84"
            "glichkeit eine Waffe zu waehlen: \n";

    cout << "\n[ 1 ] Faust ";
    cout << "\n[ 2 ] Messer ";
    cout << "\n[ 3 ] Stock \n\n";
    fChoice = getch();
    if (fChoice == '1')
    {
        cout << "\n\nSie haben sich für die Faust entschieden mit [" << weap.fist << " +"
             << "] Angriff und [" << speed.fSpeed << " +"
             << "] speed\n";
    }
    else if (fChoice == '2')
    {
        cout << "\nSie haben sich für das Messer entschieden mit [" << weap.knife << " +"
             << "] Angriff und [" << speed.kSpeed << " +"
             << "] speed\n";
    }
    else if (fChoice == '3')
    {
        cout << "Sie haben sich für für den Stock entschieden mit [" << weap.stick << " +"
             << "] Angriff und [" << speed.sSpeed << " +"
             << "] speed\n\n";
    }
    else
    {
        cout << "Ungültige Eingabe bitte erneut prüfen!\n";
    }

    if (fChoice == '1')
    {
        cout << "\n\nSie sind im Besitz von euren Fäusten! Sie aktuell " << player.life << " Leben und haben " << player.def << " Verteidigung,\n";
    }
    else if (fChoice == '2')
    {
        cout << "\n\nSie sind im Besitz von einem Messer! Sie aktuell " << player.life << " Leben und haben " << player.def << "Verteidigung,\n";
    }
    else if (fChoice == '3')
    {
        cout << "\n\nSie sind im Besitz von einem Stock! Sie aktuell " << player.life << " Leben und haben " << player.def << "Verteidigung,\n";
    }

    cout << "\nSobald dein Leben auf 0 ist, hast du verloren!\n";
    cout << "\nWir wünschen dir viel Glück!\n";
    Sleep(5000); // 5 Sekunden warten
    system("cls");

    cout << "\n\n\n\t\t Oh ein Gegner, ...";
    Sleep(3500);
    cout << "\n\n\n\t\tDer Gegner ist im besitz von : " << enemy.life << " Leben und hat " << enemy.def << " Verteidigung\n\n";
    cout << "\n\n\n\t\tDer Gegner rennt auf Dich zu!\n";
    Sleep(1500);
    // Gegner greift Spieler an
    if (player.life && player.def > 0)
    {
        cout << "\n\t\tDer Gegner hat dich getroffen!";
        player.def -= enemy.attack;
    }
    if (player.def < 0)
    {
        // Wenn die Verteidigung negativ ist, den verbleibenden Schaden von der Lebenspunkte abziehen
        player.life += player.def; // player.def ist negativ, also wird abgezogen
        player.def = 0;            // Verteidigung auf 0 setzen, da sie negativ geworden ist
    }

    cout << "\n\n\t\tAktueller Gesundheitsstatus: " << player.life << endl;
    cout << "\t\tAktueller Verteidigungsstatus: " << player.def << endl;
    cout << "\n\n";
    Sleep(1000);

    // Spieler greift Gegner an
    if (enemy.life && enemy.def > 0)
    {
        cout << "\n\t\tDu hast den Gegner getroffen!";
        enemy.def -= player.attack + speed.attack;
    }
    if (enemy.def < 0)
    {
        // Wenn die Verteidigung negativ ist, den verbleibenden Schaden von der Lebenspunkte abziehen
        enemy.life += enemy.def; // player.def ist negativ, also wird abgezogen
        enemy.def = 0;           // Verteidigung auf 0 setzen, da sie negativ geworden ist
    }
    cout << "\n\n\t\tAktueller Gesundheitsstatus: " << enemy.life << endl;
    cout << "\t\tAktueller Verteidigungsstatus: " << enemy.def << endl;

    cout << "\n\n";
    Sleep(1000);
    // Gegner greift Spieler an
    if (player.life > 0)
    {
        cout << "\n\t\tDer Gegner hat dich getroffen!";
        player.life -= enemy.attack;
    }
    if (player.life < 0)
    {
        // Wenn die Verteidigung negativ ist, den verbleibenden Schaden von der Lebenspunkte abziehen
        player.life += player.def; // player.def ist negativ, also wird abgezogen
    }
    cout << "\n\n\t\tAktueller Gesundheitsstatus: " << player.life << endl;
    cout << "\t\tAktueller Verteidigungsstatus: " << player.def << endl;
    Sleep(1000);
    // Spieler greift Gegner an
    if (enemy.life && enemy.def > 0)
    {
        cout << "\n\t\tDu hast den Gegner getroffen!";
        enemy.def -= player.attack + speed.attack;
    }
    if (enemy.def < 0)
    {
        // Wenn die Verteidigung negativ ist, den verbleibenden Schaden von der Lebenspunkte abziehen
        enemy.life += enemy.def; // player.def ist negativ, also wird abgezogen
        enemy.def = 0;           // Verteidigung auf 0 setzen, da sie negativ geworden ist
    }
    cout << "\n\n\t\tAktueller Gesundheitsstatus: " << enemy.life << endl;
    cout << "\t\tAktueller Verteidigungsstatus: " << enemy.def << endl;

    cout << "\n\n";
    Sleep(1700);
    system("cls");
    cout << "Der Gegner ist hinter dem Tor geflohen...!\n";
    Sleep(1500);
    cout << "Das Tor schließt sich...\n";
    cout << "Möchtest du hinterher? y(j/n)nein\n";
    fChoice = _getch();
    if (fChoice == 'y')
    {
        cout << "Okay, dann versuchen wir das Tor irgendwie zu öffnen!\n";
    }
    else if (fChoice == 'n')
    {
        cout << "Lasst diesen Narr fliehen!\n";
    }
    cout << "\n\nVerflucht, wie kriegen wir das Tor geöffnet?!";
    for (int i = 0; i < 3; i++)
    {
        Sleep(2400);
        system("cls");
        cout << "\n\n\n\t...";
        cout << endl;
    }
    cout << "\n\n\n\n\t\tDer Stein sieht aus als müsste man dort etwas schweres\n";
    cout << "\t\tdrauf packen, damit das Tor aufgeht!\n";
    for (int i = 0; i < 3; i++)
    {
        Sleep(2400);
        system("cls");
        cout << "\n\n\n\t...";
        cout << endl;
    }
    cout << "\t\tOh, da hinten ist ein Dorf, vielleicht haben die Dorfbewohner etwas,";
    cout << "\n\t\twas schwer genug ist damit ich es auch tragen kann! ...";
    for (int i = 0; i < 3; i++)
    {
        Sleep(2400);
        system("cls");
        cout << "\n\n\n\t...";
        cout << endl;
    }
    cout << "\n\t\tEs sieht verlassen aus...";
    for (int i = 0; i < 3; i++)
    {
        Sleep(2400);
        system("cls");
        cout << "\n\n\n\t...";
        cout << endl;
    }
    cout << "\n\t\tVielleicht finde ich ja etwas...";
    for (int i = 0; i < 3; i++)
    {
        Sleep(1400);
        system("cls");
        cout << "\n\n\n\t...";
        system("cls");
    }
    cout << "\n\n\t\tAaaaaah... Sieh mal an ein paar dicke Steine und direkt daneben eine Schubkarre,";
    cout << "\n\t\tdass kommt wie gerufenn, sehr schön!";
    Sleep(3400);
    cout << "\n\t\tDas Tor öffnet sich...!";
    Sleep(3400);
    system("cls");
    cout << "\n\t\tEr wird sich wahrscheinlich versteckt haben, wenn der Narr sich nicht";
    cout << "\n\t\tschon komplett aus dem Staub gemacht haben wird!";
    for (int i = 0; i < 3; i++)
        Sleep(2700);
    cout << "\n\n\n\t....";
    system("cls");
    cout << "\n\n\t\tHier liegt so viel Blut, so viel habe ich so noch nie gesehen!";
    cout << "\n\n\t\tIch höre etwas!";
    for (int i = 0; i < 3; i++)
    {
        Sleep(2700);
        cout << "\n\n\n\t....";
        system("cls");
    }
    cout << "\n\n";
    Sleep(2200);
    // Gegner greift Spieler an
    if (player.life > 0)
    {
        cout << "\n\t\tDer Gegner hat dich getroffen!";
        player.life -= enemy.attack;
    }
    if (player.life < 0)
    {
        // Wenn die Verteidigung negativ ist, den verbleibenden Schaden von der Lebenspunkte abziehen
        player.life += player.def; // player.def ist negativ, also wird abgezogen
    }
    cout << "\n\n\t\tAktueller Gesundheitsstatus: " << player.life << endl;
    cout << "\t\tAktueller Verteidigungsstatus: " << player.def << endl;
    Sleep(2200);
    // Spieler greift Gegner an
    if (enemy.life && enemy.def > 0)
    {
        cout << "\n\t\tDu hast den Gegner getroffen!";
        enemy.def -= player.attack + speed.attack;
    }
    if (enemy.def < 0)
    {
        // Wenn die Verteidigung negativ ist, den verbleibenden Schaden von der Lebenspunkte abziehen
        enemy.life += enemy.def; // player.def ist negativ, also wird abgezogen
        enemy.def = 0;           // Verteidigung auf 0 setzen, da sie negativ geworden ist
    }
    cout << "\n\n\t\tAktueller Gesundheitsstatus: " << enemy.life << endl;
    cout << "\t\tAktueller Verteidigungsstatus: " << enemy.def << endl;
    cout << "\n\n";
    Sleep(2200);
    // Gegner greift Spieler an
    if (player.life > 0)
    {
        cout << "\n\t\tDer Gegner hat dich getroffen!";
        player.life -= enemy.attack;
    }
    if (player.life < 0)
    {
        // Wenn die Verteidigung negativ ist, den verbleibenden Schaden von der Lebenspunkte abziehen
        player.life += player.def; // player.def ist negativ, also wird abgezogen
    }
    cout << "\n\n\t\tAktueller Gesundheitsstatus: " << player.life << endl;
    cout << "\t\tAktueller Verteidigungsstatus: " << player.def << endl;
    Sleep(2200);
    // Spieler greift Gegner an
    if (enemy.life && enemy.def > 0)
    {
        cout << "\n\t\tDu hast den Gegner getroffen!";
        enemy.def -= player.attack + speed.attack;
    }
    if (enemy.def < 0)
    {
        // Wenn die Verteidigung negativ ist, den verbleibenden Schaden von der Lebenspunkte abziehen
        enemy.life += enemy.def; // player.def ist negativ, also wird abgezogen
        enemy.def = 0;           // Verteidigung auf 0 setzen, da sie negativ geworden ist
    }
    cout << "\n\n\t\tAktueller Gesundheitsstatus: " << enemy.life << endl;
    cout << "\t\tAktueller Verteidigungsstatus: " << enemy.def << endl;

    cout << "Drücke eine beliebige Taste um das Spiel zu beenden!\n";
    _getch();
    playMenu();
}
