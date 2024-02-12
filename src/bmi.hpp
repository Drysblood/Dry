#include <iostream>


using namespace std;
class BMI{
private:
    float size, weight, bmi;

public:
    BMI();
    ~BMI();
    void bmiRechner();
    void evaluateBMI(float bmi);
    float calculateBMI(float weight, float size);
};