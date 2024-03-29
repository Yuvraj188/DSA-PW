#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter side of square";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}