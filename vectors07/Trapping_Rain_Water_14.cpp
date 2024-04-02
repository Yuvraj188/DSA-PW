#include <iostream>
#include <vector>
using namespace std;
vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
int main()
{
    int total = 0;
    int x;
    int n = height.size();
    vector<int> prev(n), next(n);
    int i, max;
    // creating prev greatest element array
    prev[0] = -1;
    next[n - 1] = -1;
    for (i = 1, max = height[0]; i < n; i++)
    {
        if (height[i - 1] > max)
            max = height[i - 1];
        prev[i] = max;
    }
    // creating next greatest element array
    next[n - 1] = -1;
    for (i = n - 2, max = height[n - 1]; i >= 0; i--)
    {
        if (height[i + 1] > max)
            max = height[i + 1];
        next[i] = max;
    }
    // selecting min from both index and if min grater than original than subtract and get stored water
    i = 1;
    while (i <= n - 2)
    {
        x = min(next[i], prev[i]);
        if (x > height[i])
            total = total + (x - height[i]);
        i++;
    }
    cout << total;
}