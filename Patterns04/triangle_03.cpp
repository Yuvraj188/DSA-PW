#include <iostream>
using namespace std;
int main()
{
    int h, b;
    cout << "enter height and base of the traingle";
    cin >> h >> b;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 0; j < b - (b - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    // star triagnle reverse
    for (int i = 1; i <= h; i++)
    {
        for (int j = b; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // odd number triangle
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j += 2)
        // first n odd number =2n-1 so first i odd no.=>2i-1
        {
            cout << j;
        }
        cout << endl;
    }

    // another way

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1, a = 1; j <= i; j++)
        // first n odd number =2n-1 so first i odd no.=>2i-1
        {
            cout << a;
            a += 2;
        }
        cout << endl;
    }
    return 0;
}
