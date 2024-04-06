#include <iostream>
using namespace std;
int main()
{
    int max = 0;
    int ar[2][2] = {5, 6, 7, 9};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (ar[i][j] > max)
                max = ar[i][j];
        }
    }
    cout << max;
}