#include <iostream>
#include <string>   // 문자열을 사용하기 위해서는 string 헤더 파일을 추가해야 함

using namespace std;
int main() {
    string dogName;
    int actualAge;
    int humanAge;

    cout << "Age? ";
    cin >> actualAge;

    humanAge = actualAge * 7;

    cout << "Name? ";
    cin >> dogName;

    cout << "<" << dogName << ">" << endl
         << "Age : " << actualAge << endl
         << "Owner Age : About " << humanAge << endl;

    return 0;
}