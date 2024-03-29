#include <iostream>
using namespace std;
void food(int a, int b = 90, int c = 67, int d = 45)
{
    cout << a << " "
         << " " << b << " " << c << " " << d << endl;
}
void fun(int x = 6, int y = 9, int z = 12)
// given x and y with default arguments so if user not pass the values they take these values
{
    cout << x << " " << y << "  " << z << " ";
}
int main()
{
    // fun(5, 6);
    // fun(4);
    // fun();
    fun(12, 34, 45);
    food(23, 56);
}

// void foo(int x = 6, int y = 9, int z = 12, int a)
// {
//     cout << x << " " << y << "  " << z << "   " << a;
// }
// this will give error because agar ek baar default arguments dena chalu kr diya toh phir baad me sbko dena pdega jaise 'a' ko chood diya that will give error.if we want we can leave in start before giving default arguments example
// void food(int a, int b , int c = 67, int d = 45)
// {
//     cout << a << b << c << d;
// }
// if function contain default values and also the actual parameters are passed then the funciton will take actual parameters in cosideration than default arguments,