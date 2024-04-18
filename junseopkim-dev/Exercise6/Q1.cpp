// Pointer Basics
//create an integer variable and define a pointer to that variable.
//assign the variable's address to the pointer, and then use the pointer to modify the value of the variable.
//check the modified value

#include <iostream>
using namespace std;
int main()
{
    //create an integer variable and define a pointer to that variable.
    int x = 10;
    int *px = &x;

    cout << x << endl;

    //assign the variable's address to the pointer, and then use the pointer to modify the value of the variable.
    *px = 20;
    cout << x << endl;
    //check the modified value



}
