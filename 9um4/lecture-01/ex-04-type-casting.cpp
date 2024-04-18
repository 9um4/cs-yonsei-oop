#include <iostream>
using namespace std;

int main() {
    int a = 4;
    double b;
    b = static_cast<double>(a) / 7;

    cout << "명시적 형변환 : " << b << endl
         << "암시적 형변환 : " << 2 / 3.4 << endl;
         
    return 0;
}