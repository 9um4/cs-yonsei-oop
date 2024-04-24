#include <iostream>
using namespace std;

double average_grade(double test1, double test2, double test3, double test4);
//Precondition: test1, test2, test3, and test4 are nonnegative.
//Postcondition: The average of test1, test2, test3, and test4 is returned.

int main()
{
    double grade1, grade2, grade3, grade4;
    cout << "Enter your grades respectively." << endl;
    cin >> grade1 >> grade2 >> grade3 >> grade4;
    cout.setf(ios :: fixed);
    cout.setf(ios :: showpoint);
    cout.precision(2);
    
    cout << "Your average grade is " << average_grade(grade1, grade2, grade3, grade4) << endl;
}

double average_grade(double test1, double test2, double test3, double test4)
{
    double sum = test1 + test2 + test3 + test4;
    double average = sum / 4;
    return average;
}