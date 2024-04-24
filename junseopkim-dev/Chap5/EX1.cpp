/*
Write a C++ code fragment that is assumed to be embedded
in an otherwise complete and correct program. You are to
assume the user has been prompted (so you don’t have to)
for (exactly) 20 values of type int to be read from the
keyboard, you are to use this input to fill an array. Do not
write a full program, just the code fragment to do this. Do give
declarations of the array and any variables you use.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[20];

    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
}