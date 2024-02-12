#include "bmi.hpp"

BMI::BMI() {}
BMI::~BMI() {}
void BMI::bmiRechner()
{
    cout << "Dein Körpergewicht (KG): ";
    cin >> weight;
    cout << "Deine Körpergröße (M): ";
    cin >> size;
    cout << "\n\n";
    cout << "Gewicht: " << weight << endl;
    cout << "KG, Größe: " << size << "m" << endl;

    bmi = calculateBMI(weight, size);
    cout << "BMI: " << bmi << endl;

    evaluateBMI(bmi);
}
void BMI::evaluateBMI(float bmi)
{
    if (bmi > 40)
    {
        cout << "Adipositas III (Behandlungsbedürftig)\n";
    }
    else if (bmi >= 35 && bmi < 40)
    {
        cout << "Adipositas II(Behandlungsbedürftig)\n";
    }
    else if (bmi >= 30 && bmi < 35)
    {
        cout << "Adipositas I(Behandlungsbedürftig)\n";
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "Präadipositas\n";
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "Normalgewicht\n";
    }
    else
    {
        cout << "Untergewichtig\n";
    }
}
float BMI::calculateBMI(float weight, float size)
{
    return weight / (size * size);
}
