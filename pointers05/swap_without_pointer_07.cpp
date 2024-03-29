#include <iostream>
using namespace std;
void swap(int &a, int &b) // pass by reference
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    cout << a << "  " << b;

    // This means that a and b in the swap function are references to the original variables a and b in the main function. This allows swap to directly modify the values of a and b in main.
}

//
// In C++, when you pass a variable by reference (using &), you are not passing the memory address directly as you would with a pointer. Instead, you are passing a reference to the original variable. This reference behaves similarly to an alias or another name for the same variable. This reference allows you to directly manipulate the original variable, without having to deal with pointers and memory addresses explicitly.
// References in C++:

// When you declare a function parameter as a reference (int &a), it means that a is an alias for the variable that is passed to the function. It is not a new variable, but rather another name for the same variable.references in C++ are more like a new name for an existing variable.