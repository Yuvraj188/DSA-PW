#include <iostream>
using namespace std;
int main()
{
    int arr[3][2] = {1, 2, 3, 4, 5, 6};
    int rows = sizeof(arr) / sizeof(arr[0]);          // Total size of array divided by size of one row
    int columns = sizeof(arr[0]) / sizeof(arr[0][0]); // Size of first row divided by size of one element

    cout << "the no. of rows in original array are " << rows;
    cout << endl;
    cout << "the no. of columns in original array are " << columns;
    cout << endl;
    int trn[columns][rows];

    // because in transpose rows becolme columns and col become row

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            trn[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << trn[i][j];
        }
        cout << endl;
    }
}