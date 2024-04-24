#include <iostream>
using namespace std;

double totalCost(int numberParameter, double priceParameter);

int main()
{
    double price, bill;
    int number;

    cout << "Enter the number of items purchased: ";
    cin >> number;
    cout << "Enter the price per item: $";
    cin >> price;

    bill = totalCost(number,price);
    cout.setf(ios :: fixed);
    cout.setf(ios :: showpoint);
    cout.precision(2);
    cout << "The total cost is $" << bill << endl;
}

double totalCost(int numberParameter, double priceParameter)
{
    const double TAXRATE = 0.05;
    double subtotal;
    subtotal = priceParameter * numberParameter;

    return(subtotal * (1+ TAXRATE));
}