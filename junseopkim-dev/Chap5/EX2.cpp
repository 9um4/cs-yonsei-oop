/*
Consider the declaration
double a[10] = {1.2, 2.1, 3.3, 3.5, 4.5, 7.9, 5.4, 8.7, 9.9, 1.0};
Write a function named out_of_order that will test this array for the
condition
a[0] <= a[1] <= a[2] <= ...
The function returns a -1 if the elements are not out of order,
otherwise it returns the index of the first element that is out of
order
*/

#include <iostream>
using namespace std;

int out_of_order(double arr[], int size);

int main()
{
    double a[10] = {1.2, 2.1, 3.3, 3.5, 4.5, 7.9, 5.4, 8.7, 9.9, 1.0};
    cout << out_of_order(a, 10) << endl;
    
    return 0;
}

int out_of_order(double arr[], int size)
{
    for(int i = 0; i < size-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            return i+1;
        }
    }
    return -1;
}