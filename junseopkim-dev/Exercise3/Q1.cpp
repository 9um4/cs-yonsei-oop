#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}


int main()
{
    int a1, b1;
    double a2, b2;

    cout << "Enter two integers: ";
    cin >> a1 >> b1;
    cout << "The sum of " << a1 << " and " << b1 << " is " << add(a1, b1) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> a2 >> b2;
    cout << "The sum of " << a2 << " and " << b2 << " is " << add(a2, b2) << endl;
    




}