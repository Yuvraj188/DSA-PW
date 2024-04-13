#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {2, 2, 3, 1};
    int count = 1;
    int i;
    sort(nums.begin(), nums.end());
    for (i = nums.size() - 2; i > 0; i--)
    {
        if (count == 3)
        {
            break;
        }
        if (nums[i] != nums[i - 1])
        {
            count++;
        }
    }
    if (count == 3)
    {
        cout << nums[i];
    }
    cout << nums[nums.size() - 1];
}
