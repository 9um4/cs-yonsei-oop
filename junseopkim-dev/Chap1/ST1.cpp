/*
Give the declaration for two variables called feet and inches.
Both variables are of type int and both are to be initialized to zero in declaration.
Give both initialization alternatives
*/

#include <iostream>
using namespace std;

int main()
{
    int feet = 0, inches = 0; //initialization method 1
    int feet2(0), inches2(0); //initialization method 2

    cout << "feet: " << feet << endl;
    cout << "inches: " << inches << endl;
    cout << "feet2: " << feet2 << endl;
    cout << "inches2: " << inches2 << endl;

    return 0;
}