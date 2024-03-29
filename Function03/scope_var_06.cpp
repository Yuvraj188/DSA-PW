#include <iostream>
using namespace std;
int f();
int b = 6; // global variable
int main()
{
    int a = 9; // local variable
    f();
}
int f()
{
    // cout << a;//will give error because scope of 'a' was till main only it was local variable
    cout << b; // this will because the variable b is global
}
// local variable can be acessed in its  own function but not outside of that function. for ex=> in for loop i is local to for loop block only
// global variable can be accessed anywhere in the program.