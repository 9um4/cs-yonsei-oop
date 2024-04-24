/*
Write a complete C++ program that reads two whole numbers into two variables
of type int and then outputs both the whole number part and the remainder
when the first number is divided by the second. This can be done using the
operators / and %.

번역 : 두 개의 int형 변수에 두 개의 정수를 읽어들인 다음 
첫 번째 숫자를 두 번째 숫자로 나눌 때의 
몫과 나머지를 모두 출력하는 완전한 C++ 프로그램을 작성하십시오.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two whole numbers: ";
    cin >> a >> b;

    cout << "Quotient: " << a/b << endl;
    cout << "Remainder: " << a%b << endl;

    return 0;
}