#include <iostream>
using namespace std;

void func1(int a, int b);
void func2(int& a, int& b);

int main() {
    int a = 3, b = 5;

    cout << "a = " << a << ", b = " << b << endl;

    func1(a, b);

    cout << "value of a after calling func1(a, b) : " << a << endl;

    a = 3;
    b = 5;

    func2(a, b);

    cout << "value of a after calling func2(a, b) : " << a << endl;

    return 0;
}

void func1(int a, int b) {
    a = a + b;
}

void func2(int& a, int& b) {
    a = a + b;
}