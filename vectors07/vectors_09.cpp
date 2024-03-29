// rotate the array by 2(means last two elements)
// 1,2,3,4,5,6 => 6,5,1,2,3,4
#include <iostream>
#include <vector>
using namespace std;
void reverse(int i, int j, vector<int> &v)
{
    int temp;
    while (i < j)
    {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    int p;
    cout << "enter the pivot";
    cin >> p; // p=2
    int n = v.size();
    if (p == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[i];
            cout << endl;
        }
        return 0;
    }
    else if (p > n)
    {
        int d;
        d = p / n;
        p = p - (n * d);
        // or simply do p=p%n;
    }
    int i = 0;
    int j = n - 1 - p;
    reverse(i, j, v);
    reverse(i + j + 1, j + p, v);
    reverse(i, n - 1, v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
        cout << endl;
    }
}