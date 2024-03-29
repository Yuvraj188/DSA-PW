#include <iostream>
using namespace std;
int a = 7; // global variable
int g = 8;
void foo()
{
    cout << a << "due to foo function" << endl;
    cout << g << "due to foo function" << endl;
}
int main()
{
    cout << a << "  due to main function before local declaration" << endl;
    int a = 4;
    foo();
    cout << endl;
    cout << a << "aftr local declaration of a" << endl;
    // local variable has more importance than global variable
    g = 78; // changed the global variable
    foo();

    // a fn can can have more than one return statement but only one return willl work
}