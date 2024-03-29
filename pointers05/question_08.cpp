#include <iostream>
using namespace std;
void find(int n, int *ptr1, int *ptr2)
{
    *ptr2 = n % 10;
    n /= 10;
    while (n > 9) // dont put n>=9 because if only 9 remains then it will go in and then n will become 0 which is not what we want.
    {
        // *ptr1=n%10;//for this put condition n>0

        n /= 10;
    }
    *ptr1 = n;
}
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int f = 0, l = 0;
    int *ptr1 = &f, *ptr2 = &l;
    find(n, ptr1, ptr2);
    cout << "the first " << f << " and last digit of a number is " << l << endl;
}