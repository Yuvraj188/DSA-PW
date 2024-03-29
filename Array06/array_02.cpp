#include <iostream>
using namespace std;
int main()
{
    int arr[10]; // no concept of bound checking
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the element for index " << i << endl;
        cin >> arr[i];
    }
    cout << "the elements in the array are";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}
