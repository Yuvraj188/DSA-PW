#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the rows of the matrix";
    cin >> m;
    cout << "enter the col of the matrix";
    cin >> n;
    int a[m][n];
    cout << "enter the elements for matrix";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int minr = 0, maxr = m - 1;
    int minc = 0, maxc = n - 1;
    while ((minc <= maxc) && (minr <= maxr))
    {
        for (int i = minc; i <= maxc; i++)
        {
            cout << a[minr][i];
        }
        cout << endl;
        minr++;
        for (int i = minr; i <= maxr; i++)
        {
            cout << a[i][maxc];
        }
        cout << endl;
        maxc--;
        for (int i = maxc; i >= minc; i--)
        {
            cout << a[maxr][i];
        }
        cout << endl;
        maxr--;
        for (int i = maxr; i >= minr; i--)
        {
            cout << a[i][minc];
        }
        cout << endl;
        minc++;
    }
}
