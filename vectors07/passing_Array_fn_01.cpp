#include <iostream>
using namespace std;
void display(int b[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << b[i];
    }
}
// void mk_change(int k[], int n)//int k[] is //equivalent to int *k
void mk_change(int *k, int n)
{
    k[0] = 110;
}
void check_fn(int s[])
{
    int size = sizeof(s) / sizeof(s[0]);
    cout << size; // so a warning came that we are finding size of pointer that is s which contains base address of the arr so thats why we pass array size with the array
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // 1)accessing array elements in function
    // 2)can we update the array in the functions
    int siz = sizeof(arr) / sizeof(arr[0]);
    display(arr); // we can access the arry elements
    cout << endl;

    mk_change(arr, siz); // this will make change in the real array
    cout << endl;
    display(arr);

    // so to proof concept that actually we are passing the address by pointer
    check_fn(arr);
}

// when we pass array it go by reference when we pass array we send the base address of it