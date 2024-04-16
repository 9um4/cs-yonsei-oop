#include <iostream>
using namespace std;

// a와 b를 더한 값을 int로 반환
int sum(int a, int b);
// a와 b를 더한 값을 double로 반환
double sum(double a, double b);

int main() {

    cout << "2 + 3 = " << sum(2, 3) << endl
         << "2.4 + 3.2 = " << sum(2.4, 3.2) << endl;

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}