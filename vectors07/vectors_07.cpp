#include <iostream>
#include <vector>
using namespace std;
// two sum problem
int main()
{
    vector<int> nums = {1, 5, 4, 1, 1, 3, 3, 4, 2};
    int target = 6;
    vector<int> v;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        cout << endl;
    }
}