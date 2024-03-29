#include <iostream>
using namespace std;
// find the maximum element of array
int main()
{
    int arr[6];
    cout << "Enter the 6 elements in array";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    // int temp = 0;
    // instead of 0 put
    int temp = arr[0];
    // and start the forloop from i=1;one iteration less

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > temp)
            temp = arr[i];
    }
    cout << "the maximum element of the array is" << temp << endl;
}