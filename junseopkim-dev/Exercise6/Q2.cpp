/*
Swap Function

1. Use pointers to swap the values of two variables.
2. Write a function swap(int* a, int* b) that swaps the values of the two integers pointed to by a and b.
*/

#include <iostream>
using namespace std;

void swap(int*a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << x << " " << y << endl;

    swap(&x, &y);

    cout << x << " " << y << endl;
}