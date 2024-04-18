#include <iostream>
using namespace std;

int main() {
    float x = 0.0;    // 실수의 값을 정확히 출력하기 위해 실수 변수 선언

    cout << "Input the float value of x : ";
    cin >> x;
    cout << "The value of y (=2x+1) = " << 2 * x + 1;

    return 0;
}