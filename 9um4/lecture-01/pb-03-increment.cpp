#include <iostream>
using namespace std;

int main() {
    float x = 0.0;

    cout << "Input the value of float variable x : ";
    cin >> x;

    cout << "The current value of x is " << x << endl
         << "The value of 2 * (x++) + 1 is " << 2 * (x++) + 1 << endl
         << "The value of x is " << x << endl << endl;

    x -= 1;

    cout << "The current value of x is " << x << endl
         << "The value of 2 * (++x) + 1 is " << 2 * (++x) + 1 << endl
         << "The value of x is " << x << endl;

    return 0;
}