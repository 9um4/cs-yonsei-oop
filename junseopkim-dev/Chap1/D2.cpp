#include <iostream>
using namespace std;

int main()
{
    short int shortInteger = 32767;
    int normalInteger = 2147483647;
    long int longInteger = 2147483647;
    float floatNumber = 3.4e38;
    double doubleNumber = 1;
    long double LongDoubleNumber = 1;
    char character = 'A';
    bool boolean = true;


    cout << "shortInteger: " << shortInteger << endl;
    cout << "normalInteger: " << normalInteger << endl;
    cout << "longInteger: " << longInteger << endl;
    cout << "floatNumber: " << floatNumber << endl;
    cout << "doubleNumber: " << doubleNumber << endl;
    cout << "LongDoubleNumber: " << LongDoubleNumber << endl;
    cout << "character: " << character << endl;
    cout << "boolean: " << boolean << endl;

    return 0;
    
}