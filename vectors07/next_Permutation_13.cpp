#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3};
    int n = nums.size();
    int flag = -1;
    int i, j, temp;
    int g;
    for (i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            flag = i;
            break;
        }
    }
    if (flag != -1)
    {
        j = n - 1;
        i = flag + 1;
        while (i < j)
        {
            // for (i = flag + 1; i < n; i++)
            // {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j--;
        }
        for (i = flag + 1; i < n; i++)
        {
            if (nums[flag] < nums[i])
            {
                g = i;
                break;
            }
        }

        // }
        temp = nums[flag];
        nums[flag] = nums[g];
        nums[g] = temp;
    }
    else
    {
        i = 0;
        j = n - 1;
        while (i < j)
        {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
        cout << nums[i];
}