#include <iostream>
using namespace std;
int main()
{
    //
    int arr[5] = {5, 2, 6, 4, 7};
    // step-1=> find the largest element first
    int temp = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > temp)
            temp = arr[i];
    }
    cout << temp;
    int smax = 0;
    // step-2 put the condition that while traversing  through array elements we should not consider the largest number
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != temp && arr[i] > smax)
        {
            smax = arr[i];
        }
    }
    cout << "second largest element is" << smax;

    // int z[7];
    // z[8] = 6; according to video this will give error but not by our compiler
    // cout << z[8];
}
