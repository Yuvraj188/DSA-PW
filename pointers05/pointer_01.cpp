#include <iostream>
using namespace std;
int main()
{
    cout << "size of the integer is " << sizeof(int) << endl; // 4 bytes=32 bits
    cout << "size of the char is " << sizeof(char) << endl;
    cout << "size of the bool is " << sizeof(bool) << endl;
    cout << "size of the float is " << sizeof(float) << endl;
    cout << "size of the long long is " << sizeof(long long) << endl;
    cout << "size of the double is " << sizeof(double) << endl;
    int x; // this will allocate integer 4 bytes because x will take garbaje value and store itself address allocation takes place when we run the program and everytime new memory will be allocated
    cout << "address of x" << &x;
    // address of variable=>
}