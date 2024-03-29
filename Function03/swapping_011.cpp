#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    // swap without temp
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // swap with function with temp
    // pass by value
    swap(a, b); // no swap becuase both have different address locations so done by pointers.
    cout << "a" << a << "b" << b;

    // we can also do by function but need reference
    // we will use pointers also
}