/*
Give an input statement that will fill the variable theNumber (of type int) with
a number typed in at the keyboard. Precede the input statement with a prompt
statement asking the user to enter a whole number.

번역 : 키보드에서 입력한 숫자로 변수 theNumber(int형)를 채울 입력문을 제공하십시오.
*/

#include <iostream>
using namespace std;

int main()
{
    int theNumber;
    
    cout << "Enter a whole number: ";
    cin >> theNumber;

    cout << "You entered: " << theNumber << endl;
    return 0;
}