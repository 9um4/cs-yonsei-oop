#include <iostream>
using namespace std;

// 10%의 부가가치세를 포함한 지불해야 할 총 금액을 반환하는 함수
// 모든 물품의 가격은 동일하다고 가정
double totalCost(int numberParameter, double priceParameter);
// 이렇게 선언할 함수는 위에 선언해 주어야 함 -> 이런걸 prototype 함수라고 함

int main() {
    double price, bill;
    int number;

    cout << "Enter the number of items purchased : ";
    cin >> number;
    cout << "Enter the price per item $";
    cin >> price;

    bill = totalCost(number, price);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at " << "$" << price << " each." << endl
         << "Final bill, including tax, is $" << bill << endl;

    return 0;
}

double totalCost(int numberParameter, double priceParameter) {
    const double TAXRATE = 0.1;
    return (1 + TAXRATE) * numberParameter * priceParameter;
}