#include <iostream>
using namespace std;

int main() {
    int a = 4;
    double b;
    b = static_cast<double>(a) / 7;

    cout << "Explicit type casting : " << b << endl
         << "Implicit type casting : " << 2 / 3.4 << endl;
         
    return 0;
}