/*
Excape Sequences
- \n : new line
- \r : carriage return
- \t : tab
- \a : alert (bell)
- \\ : backslash
- \' : single quote
- \" : double quote
- \v : vertical tab
- \b : backspace
- \f : formfeed
- \? : question mark
*/


#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, world!" << endl; //default
    cout << "--default--\n\n"; //default
    
    cout << "Hello, \nworld!" << endl; //new line
    cout << "--new line--\n\n"; //new line

    cout << "Hello, \tworld!" << endl; //tab
    cout << "--tab--\n\n"; //tab

    cout << "Hello, \rworld!" << endl; //carriage return
    cout << "--carriage return--\n\n"; //carriage return

    cout << "Hello, \aworld!" << endl; //alert
    cout << "--alert--\n\n"; //alert

    cout << "Hello, \\world!" << endl; //backslash
    cout << "--backslash--\n\n"; //backslash

    cout << "Hello, \'world!" << endl; //single quote
    cout << "--single quote--\n\n"; //single quote
    
    cout << "Hello, \"world!" << endl; //double quote
    cout << "--double quote--\n\n"; //double quote
    
    cout << "Hello, \vworld!" << endl; //vertical tab
    cout << "--vertical tab--\n\n"; //vertical tab
    
    cout << "Hello, \bworld!" << endl; //backspace
    cout << "--backspace--\n\n"; //backspace
    
    cout << "Hello, \fworld!" << endl; //formfeed
    cout << "--formfeed--\n\n"; //formfeed
    
    cout << "Mol\?ru" << endl; //question mark
    cout << "--question mark--\n\n"; //question mark

    return 0;
}