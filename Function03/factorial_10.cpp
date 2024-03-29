// print factorial upto n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    int fact = 1;
    // in for loop we generally put i=2 when only want factorial of a number but here we want factorial till n so n=1 we have taken
    for (int i = 1; i <= n; i++)
    {
        // cout<<fact*=i; will give error
        fact *= i;
        cout << fact << endl;
    }
}