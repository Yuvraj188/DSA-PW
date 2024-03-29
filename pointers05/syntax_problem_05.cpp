#include <iostream>
using namespace std;
int main()
{
    int x = 12, y = 13; // both x and y are integers
    // int *p1=&x,p2=&y;//this line gives error
    int *p1 = &x, y; // here p1 is int pointer whereas y is a integer this is syntax problem in pointers
    //    and int *p1 or int * p;  are same
}