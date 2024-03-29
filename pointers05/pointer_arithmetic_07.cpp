#include <iostream>
using namespace std;
int main()
{ // dependence of addition and subtraction to pointes on the data type
    int x = 7;
    int *ptr = &x; // ptr points to first or base address of x
    cout << ptr << endl;
    ptr = ptr + 1; // ptr will point 4 bytes ahead where address of x ends
    cout << ptr << endl;
    // 0x61ff04
    // 0x61ff08

    bool y = true;
    bool *pk = &y;
    cout << pk << endl;
    pk = pk + 1; // pointer will point 1 bytes ahead becuase bool takes 1 byte to store.
    cout << pk << endl;
    // 0x61ff03
    // 0x61ff04
    cout << sizeof(pk) << endl; // pointer always take 4 bytes whether it is of type bool or int.
    cout << sizeof(ptr) << endl;
    // when we add 1 to pointer it will shift as much the size of data type of element which address it is pointing

    cout << *pk << endl;
    cout << *ptr << endl;

    int k = 10;
    int *gtr = &k;
    // *gtr++; will give warining or error
    // so we do (*gtr)++ instead of *gtr++
    *gtr = *gtr + 1;
    cout << *gtr;
}