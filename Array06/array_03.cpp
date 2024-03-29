#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of students";
    cin >> n;
    int arr[n]; // 0 to n-1
    for (int i = 0; i < n; i++)
    {
        cout << "enter the marks for roll no." << i + 1;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 35)
        {
            cout << "the rollno of the student is " << i + 1 << endl;
        }
    }
}