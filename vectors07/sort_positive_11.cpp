#include <iostream>
#include <vector>
using namespace std;
// sort positive and negative numbers
int main()
{
    vector<int> v = {-1, 2, 3, 4, 5, -6, -9};
    int f = 0;
    int temp = 0;
    int r = v.size() - 1;
    while (f < r)
    {
        if (v[f] < 0)
        {
            f++;
        }
        if (v[r] > 0)
            r--;
        if (f > r) // important condition work for other input but not for this input
            break;
        if (v[f] > 0 && v[r] < 0)
        {
            temp = v[f];
            v[f] = v[r];
            v[r] = temp;

            f++;
            r--;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
