/**
 *  namespace
 *      - cpp에 들어와서 생긴 개념
 *      - 방대한 양의 라이브러리와 식별자들이 나오면서 중복이 되는 상황이 발생할 때 구분 되지 않는 경우를 해결하기 위해 나온 개념
 *      - 중복되는 식별자를 관리할 수 있음
*/

#include <iostream>
using namespace std;    // 중복되는 식별자가 나오지 않는 경우 (cout이나 cin은 겹치는 경우가 거의 없음) std 네임스페이스에 포함된 모든 것을 사용하겠다

/*
    특정 식별자만 생략하고 싶은 경우 using std::cout; 이렇게 사용
*/

int main() {
    int numberOfLanguages;

    cout << "Hello reader.\n"
         << "Welcome to C++.\n";

    cout << "How many programming languages have you used? ";
    cin >> numberOfLanguages;
    
    if (numberOfLanguages < 1)
        cout << "Read the preface. You may prefer\n"
             << "a more elementary book by the same author.\n";
    else
        cout << "Enjoy the book.\n";

    return 0;
}