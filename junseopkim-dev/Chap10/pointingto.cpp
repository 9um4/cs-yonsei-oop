#include <iostream>
using namespace std;

int main()
{
    // int v1 = 0;
    // int *p1 = &v1;
    // *p1 = 42;
    // cout << v1 << endl;
    // cout << *p1 << endl;

    // int *p1, *p2, v1, v2;
    // v1 = 42;
    // v2 = 50;

    // p1 = &v1;
    // p2 = &v2;

    // cout << "v1: " << v1 << " v2: " << v2 << endl;

    // cout << "p1: " << *p1 << " p2: " << *p2 << endl;

    // p1 = p2;

    // cout << "p1: " << *p1 << " p2: " << *p2 << endl;

    // p1 = &v1;

    // *p1 = *p2;

    // cout << "v1: " << v1 << " v2: " << v2 << endl;

    int *p1 = new int;
    *p1 = 42;

    delete p1; // dangling pointer
    p1 = NULL; 

    

    return 0;
}