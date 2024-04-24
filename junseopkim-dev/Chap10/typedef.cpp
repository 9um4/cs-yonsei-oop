#include <iostream>
using namespace std;

typedef int* IntPointer;

/*
IntPointer p; 
is equal to
int *p;
*/

void sneaky(IntPointer temp);

int main()
{
    IntPointer p;

    p = new int;

    *p = 77;

    cout << "Before call to function *p == " << *p << endl;


    return 0;
}

void sneaky(IntPointer temp)
{
    *temp = 99;
    cout << "Inside function *temp == " << *temp << endl;
}