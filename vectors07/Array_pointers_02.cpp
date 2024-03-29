#include <iostream>
using namespace std;
void check(int *k)
{
    for (int i = 0; i < 5; i++)
    {
        cout << k[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // int *ptr=&arr[0]; both are same
    // but int *ptr=arr[0]this will give error because integer value
    *ptr = 1;   // by this also we can assign values
    ptr[0] = 8; // we can modify the array using ptr because array name also contain base address and this pointer also contain base address so both are same that was done in the previos 01 program where we pass array
    for (int i = 0; i < 5; i++)
    {
        // cout << ptr[i] << " ";
        cout << i[ptr] << " "; // also valid
    }
    check(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << *ptr;
        ptr++;
    }
    // but now we cant use ptr becuase it is pointing out of array so we write
    ptr = arr; // to bring the pointer back to first element of array.
    cout << "we can print array liske this also";
    for (int i = 0; i < 5; i++)
    {
        cout << i[arr];
    }
}