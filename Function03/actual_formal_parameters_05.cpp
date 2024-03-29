#include <iostream>
using namespace std;
void fun(int x, int y)
{
    cout << "address of fun x is " << &x << endl;
    cout << "address of fun y is " << &y << endl;
}

int main()
{
    int x = 6;
    int y = 5;
    cout << "address of main x is " << &x << endl;
    cout << "address of main y is " << &y << endl;
    fun(x, y);
}
// actual parameters => fun(x, y); when this fun called and x and y passed here x and y are actual parameters
// formal parameters=>void fun(int x, int y) here x and y are formal parameters which get actual parameters