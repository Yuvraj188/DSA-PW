#include <iostream>
using namespace std;
void change(int a[3][2])
{
    a[0][0] = 50;
}
int main()
{
    // cannot pass without the row and column we have specify when defining the function that it will recieve the 2d matrix of how many rows and columns
    int arr[][2] = {1, 2, 3, 4, 5, 6};
    cout << arr[0][0] << endl;
    change(arr);
    cout << arr[0][0];
}