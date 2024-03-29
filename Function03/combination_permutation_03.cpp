#include <iostream>
using namespace std;
// nCr=n!/r!(n-r)!
// nPr=n!/(n-r)!
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
int permutation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}
int main()
{
    int n, r;
    cout << "enter the value of n and r";
    cin >> n >> r;
    cout << "Combination : " << combination(n, r) << endl;
    cout << "Permutation : " << permutation(n, r);
}