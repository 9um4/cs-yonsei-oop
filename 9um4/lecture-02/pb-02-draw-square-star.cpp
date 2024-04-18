#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Input the size of square with \'*\' : ";
    cin >> size;

    for (int row = 0; row < size; row++) {
        for (int column = 0; column < size; column++)
            cout << "*";
        cout << endl;
    }
}