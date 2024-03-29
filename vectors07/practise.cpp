#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5};

    int pointer = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[pointer] = nums[i];
            pointer++;
        }
    }

    cout << nums.size();
    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
