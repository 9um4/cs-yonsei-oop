#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter the weight (in kilograms) : ";
    cin >> weight;

    cout << "Enter the height (in meters) : ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI is : " << bmi << endl;
    if (bmi < 18.5)
        cout << "Underweight!" << endl;
    else if (bmi < 24.9)
        cout << "Normal weight :)" << endl;
    else if (bmi < 29.9)
        cout << "Overweight!" << endl;
    else 
        cout << "Obese :(" << endl;

    return 0;
}