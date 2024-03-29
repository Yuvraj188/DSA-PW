#include <iostream>
using namespace std;
int mini(int, int); // Declaration of fn should be given if main  is written before the fn definition otherwise error
int main()
{
    int x, y;
    cout << "enter two numbers";
    cin >> x, y;
    cout << mini(x, y);
    // cout<<min(5,6);//inbuilt functions
    cout << max(5, 6); // inbuilt functions
}

// the x and y in main and x and y in the mini are having different address locations so both are different
int mini(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}