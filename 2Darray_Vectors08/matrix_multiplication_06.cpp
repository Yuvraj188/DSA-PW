#include <iostream>

using namespace std;
int main()
{
    int m, n, p, q;
    cout << "enter the row of 1st matrix" << endl;
    cin >> m;
    cout << "enter the col of 1st matrix" << endl;
    cin >> n;
    cout << "enter the row of 2st matrix" << endl;
    cin >> p;
    cout << "enter the col of 1st matrix" << endl;
    cin >> q;
    if (n == p)
    {
        int sum = 0;
        int a[m][n];
        int b[p][q];
        cout << "enter the elements for 1st matrix";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        cout << "enter the elements for 2st matrix";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        int res[m][q];
        // step1:2 loop to traverse res matrix
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                res[i][j] = sum;
                sum = 0;
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "cannot be multiplied";
    }
}