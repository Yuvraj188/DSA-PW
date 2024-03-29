//    0 1 2 3 4 5
// 0  1
// 1  1 1
// 2  1 2 1
// 3  1 3 3 1     here 5C3=10 where 5 is row and 3 is
// 4  1 4 6 4 1        column and 10 is intersection
// 5  1 5 10 10 5 1
#include <iostream>
using namespace std;
int factorial(int x)
{
    int fact = 1;
    for (int i = x; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n;
    cout << "enter row for the pascal triangle";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
    // code is not optimised because for each combination calling comb fun then com fun calling fac fn 3 times so not optimised at all
}
