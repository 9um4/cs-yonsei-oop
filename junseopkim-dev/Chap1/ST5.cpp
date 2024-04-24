/*
What is the output of the following program lines when they are embedded in a
correct program that declares all variables to be of type char?
a = 'b';
b = 'c';
c = a;
cout << a << b << c << 'c';

번역 : 모든 변수가 char형으로 선언된 올바른 프로그램에 다음 프로그램 라인이 포함되어 있을 때 출력은 무엇입니까?
*/

#include <iostream>
using namespace std;

int main()
{
    char a,b,c;
    a = 'b';
    b = 'c';
    c = a;
    cout << a << b << c << 'c';
    return 0;
}

/*
output : bcbc
*/