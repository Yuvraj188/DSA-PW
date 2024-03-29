#include <iostream>
using namespace std;
int main()
{
    int x = 12;
    int *p = &x;        // pointer to an integer
    cout << *p << endl; // dereferencing the pointer gives us the value of variable x i.e 12.it takes the address in p then point to the value at that address

    int y = 12;
    int *k = &y; // pointer to an integer
    y = 88;
    cout << *k << endl;

    int z = 22;
    int *n = &z; // pointer to an integer
    cout << z << endl;
    *n = 67; // we can update the value of n also
    cout << z << endl;
}