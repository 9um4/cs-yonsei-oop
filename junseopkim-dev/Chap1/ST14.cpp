/*
The following code intends to input a user’s first name, last name, and age.
However, it has an error. Fix the code.
string fullName;
int age;
cout << "Enter your first and last name." << endl;
cin >> fullName;
cout << "Enter your age." << endl;
cin >> age;
cout << "You are " << age << " years old, " << fullName << endl;
*/

#include <iostream>
using namespace std;

int main()
{
    // string fullName;
    string firstName;
    string lastName;
    int age;
    cout << "Enter your first and last name." << endl;
    // cin >> fullName;
    cin >> firstName >> lastName;
    cout << "Enter your age." << endl;
    cin >> age;
    cout << "You are " << age << " years old, " << firstName << " " << lastName << endl;
}