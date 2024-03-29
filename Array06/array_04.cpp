#include <iostream>
using namespace std;
// to find the length of the array
int main()
{
    int b[] = {7, 8, 9};
    int a[] = {1, 2, 45, 5, 67, 4, 54, 543, 3, 5, 3, 64, 6534, 5, 3, 53, 5, 3, 53, 5, 3, 6534, 65, 346};
    int n = sizeof(b) / sizeof(b[0]); // length of the array
    int y = sizeof(a) / sizeof(a[0]);
    cout << "no. of elementes in Array b are" << n << endl;
    cout << "no. of elementes in Array a are" << y << endl;

    cout << &a << endl; // this will give the base address of the array  which is equal to &a[0]
    cout << &a[0] << endl;
    ;
    cout << a; // this also gives the base address of the array or first element of array
    // int *ptr=&a; cannot put array base address into simple int pointer
}

// note=>when we print address of integer or any thing we get the address of the first byte of it always //see lec 78 => 11:00