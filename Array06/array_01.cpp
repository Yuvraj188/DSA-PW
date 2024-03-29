// data structure=>storage to store data
// array=>collection of  items with same type
#include <iostream>
using namespace std;
int main()
{
    int arr[5]; // all elements in array are indexed starting from 0 to n-1 and placed at contiguous memeory locations
    arr[0] = 7; // modify the value
    // cout << arr[1];takes garbaje value
    int a[6] = {1, 2, 3, 4, 5, 6};
    // cout << a[9]; //will give garbaje value

    int b[] = {5, 6, 7, 8, 9}; // it is also correct way of initailization
    // int k[];//this will give error if we are not giving size and also not initailization then error
}