// pass by value cant swap the values
// pass by reference can swap the values
#include <iostream>
using namespace std;
void swap(int *x, int *y) // these x and y are different from the passed ones.but it get address so both x(swap wala x and main wala x) and both y point to same address
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    int a = 15, b = 16;
    cout << "before swap";
    cout << "a: " << a << "b: " << b;

    // swap(&a, &b);
    int *x = &a, *y = &b;
    swap(x, y);
    cout << "after swap";
    cout << "a: " << a << "b: " << b;
}