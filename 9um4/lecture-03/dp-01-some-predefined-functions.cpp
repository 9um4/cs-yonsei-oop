#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {    
    cout << "sqrt(4.0) : " << sqrt(4.0) << endl;                    // 제곱근 in cmath

    cout << "pow(2.0, 3.0) : " << pow(2.0, 3.0) << endl;            // 거듭제곱 in cmath

    cout << "abs(-4) : " << abs(-4) << endl;                        // 절댓값 in cstdilib
    
    cout << "labs(-403020303) : " << labs(-403020303) << endl;      // 큰 정수의 절댓값 in cstdlib

    cout << "fabs(-7.2323) : " << fabs(-7.2323) << endl;            // 실수의 절댓값 in cmath

    cout << "ceil(3.2) : " << ceil(3.2) << endl;                    // 천장함수 in cmath

    cout << "floor(2.4) : " << floor(2.4) << endl;                  // 바닥함수 in cmath

    cout << "exit(1) : kill the current process. (not called)\n";   // 시스템 종료 in cstdlib

    cout << "rand() : " << rand() << endl;                          // 0부터 2^16 -1 까지의 난수 생성 in integer in cstdlib

    cout << "time(0) : " << time(0) << endl;                        // 현재 시간 반환 in ctime

    cout << "srand(24) : 난수의 시드값 설정" << endl;                // 시드 값을 적절히 초기화하기 위해서는 srand(time(0))를 사용 in cstdlib

    return 0;
}