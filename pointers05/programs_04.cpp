//
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    int sum;
    cout << "Enter the value of x and y";
    int *a, *b;

    a = &x;
    b = &y;
    cin >> *a >> *b; // input through pointers
    sum = *a + *b;
    cout << sum;
}