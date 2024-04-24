/*
What statements should you include in your program to ensure that when a
number of type double is output, it will be output in ordinary notation with
three digits after the decimal point?

번역: double형 숫자가 출력될 때 소수점 이하 세 자리의 일반 표기법으로 출력되도록
하려면 프로그램에 어떤 문장을 포함해야 합니까?
*/

#include <iostream>


using namespace std;

int main()
{
    double num = 3.14159265358979323846;

    cout.setf(ios::fixed); // 숫자를 출력할 때 항상 소수점 아래를 일정한 자리수로 표현
    cout.setf(ios::showpoint); // 출력할 때 항상 소수점을 표시하도록 설정
    cout.precision(3); //소수점 아래로 표시되는 자릿수를 정확히 3자리로 설정

    cout << num << endl;
    return 0;
}