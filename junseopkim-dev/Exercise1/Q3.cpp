#include <iostream>
using namespace std;

int main()
{
    double x,y,temp;

    cout << "Enter a number: ";
    cin >> x;
    temp = x;

    y = 2*x+1;

    cout << "x = " << x << endl; // "x = 3
    cout << "y = " << y << endl;

    x = temp;
    y = 2*(x++)+1;

    cout << "x = " << x << endl; // "x = 4
    cout << "y = " << y << endl;

    x = temp;
    y = 2*(++x)+1;

    cout << "x = " << x << endl; // "x = 4
    cout << "y = " << y << endl;
}