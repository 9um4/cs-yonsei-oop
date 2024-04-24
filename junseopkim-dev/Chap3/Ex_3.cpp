/*
Write a function definition for a isDigit function that
takes one argument of type char and returns a bool value. The function returns true if the argument is a decimal digit;
otherwise it returns false.
*/

#include <iostream>
// #include <cctype>

using namespace std;

bool isDigit(char c);
// Precondition: c is a character.
// Postcondition: The function returns true if c is a decimal digit; otherwise it returns false.

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if(isDigit(c))
        cout << "The character is a digit." << endl;
    else
        cout << "The character is not a digit." << endl;
    return 0;
}

bool isDigit(char c)
{
    return (c>='0' && c<='9');
}