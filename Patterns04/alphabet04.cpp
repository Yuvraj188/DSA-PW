#include <iostream>
using namespace std;
int main()
{
    cout << "Enter no. of rows and columns";
    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1, asc = 65; j <= c; j++)
        {
            // cout << (char)asc++;
            cout << (char)(64 + j);
        }
        cout << endl;
    }
}