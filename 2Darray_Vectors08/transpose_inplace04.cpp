#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int temp;
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
    cout << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arry[i][j];
        }
        cout << endl;
    }
}
