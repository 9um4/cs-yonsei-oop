/*
Write a program that contains statements that output the values of five or six variables that
have been defined, but not initialized.
Compile and run the program. What is the output? explain.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;

    return 0;

    /*
    output:
    a: 4201323
    b: 6422356
    c: 4201232
    d: 1976271469
    e: 6422280
    f: -2

    meaning : The values of the variables are not initialized, so the values of the variables are random.
    */
}