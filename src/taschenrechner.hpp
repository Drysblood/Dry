#include <iostream>
#include <conio.h>
#include <cmath>
#include <math.h>

class Taschenrechner
{
private:
    double num1, num2;
    double result;
    // Prozentwert, Grundwert, Prozentsatz!
    double W, G, P;
    char calcChoice;

    double angle_degress; // Winkel in Grad
    double angle_radians; // Winkel in Radiant
    double sin_value;     // Sinuswert

public:
    Taschenrechner();

    void showCalc();
    int addition(double num1, double num2);
    int subtraktion(double num1, double num2);
    int multiply(double num1, double num2);
    int divide(double num1, double num2);

    int prozente(double num1, double num2);
    int Wurzel(double number, double sqrt);
    int Winkel();
};