#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2, 2, 3, 3, 3, 2, 2};
    int count = 0;
    int m = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            m = nums[i];
        }
        if (m == nums[i])
            count++;
        else
            count--;
    }
    cout << m;
}