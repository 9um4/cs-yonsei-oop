#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int limit = 10;

    cout << "!(count == 12) : " << !(count == 12) << endl;

    cout << "(limit < 0) && ((limit / count) > 7) : " << ((limit < 0) && ((limit / count) > 7)) << endl;

    return 0;
}