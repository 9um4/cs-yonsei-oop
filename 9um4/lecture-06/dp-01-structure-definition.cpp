#include <iostream>
#include <cmath>
using namespace std;

// 예금 계좌에 관한 structure
struct DepositAccount {
    long long balance;
    double interestRate;
    int years;
};

DepositAccount updateDepositAccount();
long long getTotal(DepositAccount& account);

int main() {
    DepositAccount account = updateDepositAccount();
    cout << "You will get ₩" << getTotal(account);
    return 0;
}

DepositAccount updateDepositAccount() {
    DepositAccount account;
    cout << "Enter the account balance : ₩";
    cin >> account.balance;
    cout << "Enter the account interest rate : ";
    cin >> account.interestRate;
    cout << "How much years will you deposit your money? ";
    cin >> account.years;
    return account;
}

long long getTotal(DepositAccount& account) {
    return pow(account.interestRate + 1.0, account.years) * account.balance;
}