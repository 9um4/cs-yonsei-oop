/*
What is the output of the following program lines when they are embedded in a
correct program that declares number to be of type int?
number = (1/3) * 3;
cout << "(1/3) * 3 is equal to " << number;

번역 : number가 int형으로 선언된 올바른 프로그램에 다음 프로그램 라인이 포함되어 있을 때 출력은 무엇입니까?
*/

#include <iostream>
using namespace std;

int main()
{
    int number;

    number = (1/3) * 3;
    cout << "(1/3) * 3 is equal to " << number;
    return 0;
}

/*
output : 0

1/3은 0.3333...이지만 int형으로 선언되었기 때문에 소수점 이하를 버리고 0이 된다.
*/