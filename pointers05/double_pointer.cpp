#include <iostream>
using namespace std;
int main()
{
    // double pointer=> use to store the address of single pointer
    int x = 5;
    int *ptr = &x;
    int **p = &ptr;
    int ***q = &p; // triple pointer
    cout << "Value of x : " << x << endl;
    cout << ptr << endl; // address of x
    cout << *p << endl;  // adress of x
    cout << **p << endl;
    // cout << **ptr << endl; will give error because stores address of variable not pointer
    cout << ***q;
}