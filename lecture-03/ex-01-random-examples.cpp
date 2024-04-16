#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int rawRandomNumber = rand();

    cout << "Raw Random Number (0 ~ " << RAND_MAX << ") : " << rawRandomNumber << endl
         << "Random between (0.0 ~ 1.0) : " << (RAND_MAX - rawRandomNumber) / static_cast<double>(RAND_MAX) << endl
         << "Random between (1 ~ 6) : " << rawRandomNumber % 6 + 1 << endl
         << "Random between (10 ~ 20) : " << rawRandomNumber % 10 + 10 << endl;

    return 0;
}