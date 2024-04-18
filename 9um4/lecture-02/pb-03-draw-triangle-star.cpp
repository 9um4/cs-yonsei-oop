#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Input the length of base of right angled triangle with \'*\' : ";
    cin >> size;

    for (int row = 0; row < size; row++) {
        for (int column = 0; column < row + 1; column++)
            cout << "*";
        cout << endl;
    }

    return 0;
}