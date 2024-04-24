/*
Give the declaration for two variables called count and distance.
count is of type int and is initialized to zero. distance is of type double and is initialized to 1.5.
Give both initializaiton alternatives.
*/

#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    double distance = 1.5;

    int count2(0);
    double distance2(1.5);

    cout << "count: " << count << endl;
    cout << "distance: " << distance << endl;

    cout << "count2: " << count2 << endl;
    cout << "distance2: " << distance2 << endl;

    return 0;
}