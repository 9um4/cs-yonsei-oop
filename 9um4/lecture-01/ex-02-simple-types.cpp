#include <iostream>
using namespace std;

int main() {
    short int shortVariable = 32767;    // 2 bytes
    int intVariable = 2147483647;       // 4 bytes
    long int longVariable = 2147483647; // 4 bytes
    float floatVariable = 0.02;         // 4 bytes
    double doubleVariable = 0.04321;    // 8 bytes
    long double longDouble = 0.3213;    // 10 bytes
    char charVariable = 'k';            // 1 byte
    bool boolVaraible = true;           // 1 byte

    cout << "Short : " << shortVariable << "\n"
         << "Int : " << intVariable << "\n"
         << "Long int : " << longVariable << "\n"
         << "Float : " << floatVariable << "\n"
         << "Double : " << doubleVariable << "\n"
         << "Char : " << charVariable << "\n"
         << "Bool : " << boolVaraible << "\n";
    
    return 0;
}