#include <iostream>
using namespace std;
int main()
{                // int* is data type
    int x = 4;   // float *y = &x; give error cannot save address of int in float pointer
    int *p = &x; // pointer to an integer variable
    // p points to the address of the  variable p. and stores address of it
    cout << "address of the x is   " << &x << "    value of pointer p which points x  " << p << endl;

    float k = 5.7;
    float *h = &k;
    cout << "Address of k=" << &k << endl;
    cout << "Value of h which points k=" << h << endl;
    // similarly we have pointer for bool and char also.
}