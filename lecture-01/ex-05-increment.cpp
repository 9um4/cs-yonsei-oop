#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 2, valueProduced;

    valueProduced = 2 * (++n);

    cout << "n : " << n << endl
         << "value produced : " << valueProduced << endl;

    valueProduced = 2 * (m++);

    cout << "m : " << m << endl
         << "value produced : " << valueProduced << endl;

    return 0;
}