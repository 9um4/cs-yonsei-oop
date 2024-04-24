#include <iostream>

// 함수 func1은 값에 의한 매개변수 전달을 사용합니다.
void func1(int a, int b) {
    a = a + b;
}

// 함수 func2는 참조에 의한 매개변수 전달을 사용합니다.
void func2(int& a, int& b) {
    a = a + b;
}

int main() {
    int a = 3, b = 5;

    // func1을 호출하고 a와 b의 값을 출력합니다.
    // func1은 값에 의한 호출이므로 a와 b의 원래 값은 변하지 않습니다.
    func1(a, b);
    std::cout << "After func1, a: " << a << ", b: " << b << std::endl;

    // a와 b의 값을 다시 3과 5로 설정합니다.
    a = 3;
    b = 5;

    // func2를 호출하고 a와 b의 값을 출력합니다.
    // func2는 참조에 의한 호출이므로 a의 값이 변경됩니다.
    func2(a, b);
    std::cout << "After func2, a: " << a << ", b: " << b << std::endl;

    return 0;
}
