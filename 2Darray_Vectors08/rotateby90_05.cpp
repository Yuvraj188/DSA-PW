// step1:transpose and then change starting col with last col
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int temp, j, k;
    int arry[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arry[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            // if (i == j)
            // {
            //     continue;
            // }
            if (i != j)
            {
                temp = arry[i][j];

                arry[i][j] = arry[j][i];
                arry[j][i] = temp;
            }
        }
    }

    int col = 3; // number of columns
    for (int i = 0; i < col; i++)
    {
        j = 0;
        k = col - 1;
        while (j < k)
        {
            temp = arry[i][j];
            arry[i][j] = arry[i][k];
            arry[i][k] = temp;
            j++;
            k--;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arry[i][j];
        }
        cout << endl;
    }
}
