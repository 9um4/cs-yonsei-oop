//Formal Parameter used as a local variable

#include <iostream>

using namespace std;

const double RATE = 150; // $150 per quarter hour
double fee(int hoursWorked, int minutesWorked);
//precondition: hoursWorked and minutesWorked are positive
//postcondition: The fee is returned

int main()
{
    int hours, minutes;
    double bill;

    cout << "Enter the hours and minutes : " << endl;

    cin >> hours >> minutes;

    bill = fee(hours, minutes);

    cout.setf(ios :: fixed);
    cout.setf(ios :: showpoint);
    cout.precision(2);

    cout << "For " << hours << " hours and " << minutes << " minutes, the bill is $" << bill << endl;
    return 0;
}

double fee(int hoursWorked, int minutesWorked)
{
    int quarterHours;

    minutesWorked = hoursWorked * 60 + minutesWorked;
    quarterHours = minutesWorked / 15;
    return (quarterHours * RATE);
}