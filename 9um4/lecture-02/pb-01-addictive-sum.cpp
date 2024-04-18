#include <iostream>
using namespace std;

int main() {
    int n, result = 0;
    cout << "Input the integer value of N : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result += i;
    }

    cout << "Sum of all numbers from 1 to N is " << result << endl;
    return 0;
}