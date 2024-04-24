#include <iostream>
using namespace std;

int main()
{
    double weight, height, bmi;

    cout << "Enter your weight(kg) and height(m)." << endl;

    cin >> weight >> height;

    bmi = weight/(height*height);

    cout << "Your BMI is " << bmi << endl;

    if(bmi <18.5)
    {
        cout << "Underweight" << endl;
    }
    else if (bmi <24.9)
    {
        cout << "Normal" << endl;
    }
    else if (bmi < 29.9)
    {
        cout << "Overweight" << endl;
    }
    else if (bmi < 34.9)
    {
        cout << "Obesity Grade II" << endl;
    }
    else if (bmi < 39.9)
    {
        cout << "Obesity Grade III" << endl;
    }
    else
    {
        cout << "Obesity Grade IV" << endl;
    }

}