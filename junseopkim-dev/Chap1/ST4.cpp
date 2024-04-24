/*
Convert each of the following mathematical formulas to a C++ expression.
*/

#include <iostream>
using namespace std;

int main()
{
    //input
    double x, y, z;
    cout << "Enter x, y, z respectively: ";
    cin >> x >> y >> z;

    //output
    //1. 3x
    cout << "3x: " << 3 * x << endl;

    //2. 3x+y
    cout << "3x+y: " << 3*x + y << endl;

    //3. (x+y)/7
    cout << "(x+y)/7: " << (x+y)/7 << endl;

    //4. (3x + y)/(z+2)
    cout << "(3x+y)/(z+2): " << (3*x+y)/(z+2) << endl;
    

    return 0;
}