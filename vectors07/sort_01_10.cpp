#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v = {1, 0, 0, 1, 0, 0, 1};
    // 2-pass method
    // int c1 = 0;
    // int c0 = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == 1)
    //     {
    //         c1++;
    //     }
    //     else
    //         c0++;
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (i < c1)
    //         v[i] = 1;
    //     else
    //         v[i] = 0;
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i];
    // }

    // 2-pointer method
    vector<int> v = {1, 1, 0, 1, 0, 1, 1, 0};
    int f = 0;
    int r = v.size() - 1;
    while (f < r)
    {
        if (v[f] == 0)
        {
            f++;
        }
        if (v[r] == 1)
            r--;
        if (f > r) // important condition work for other input but not for this input
            break;
        if (v[f] == 1 && v[r] == 0)
        {
            v[f] = 0;
            v[r] = 1;
            f++;
            r--;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
