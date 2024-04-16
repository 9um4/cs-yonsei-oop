#include <iostream>
using namespace std;

int f(int x);

int main() {
    // do something
    return 0;   
}

int f(int x) {
    int x;              // 정수형 변수 x를 선언함으로서 argument x의 값이 가려짐 -> compile error
    // 쉽게 말해서 앞으로 참조할 x가 2개라 둘 중 무엇을 써야 할지 모호해져 그냥 에러를 발생시킴
    return 0;
}