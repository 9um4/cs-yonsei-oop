/*
Given the following fragment that purports to convert from degrees Celsius to
degrees Fahrenheit, answer the following questions:
double c = 20;
double f;
f = (9/5) * c + 32.0;
*/

#include <iostream>
using namespace std;

int main()
{
    double c = 20;
    double f;

    //f = (9/5) * c + 32.0;
    f = (9.0/5.0) * c + 32.0;

    cout << "Fahrenheit: " << f << endl;
    return 0;
}

/*
a. What value is assigned to f? = 52
b. What is the problem with the code? 
= 9/5는 정수 나눗셈이므로 1이다. 따라서 9/5는 1이 되고, 1 * 20 + 32 = 52가 된다.
따라서 20도 섭씨는 52도 화씨로 변환되어야 하지만, 68도가 나와야 한다.
c. rewrite the code to fix the problem.
= f = (9.0/5.0) * c + 32.0;

*/