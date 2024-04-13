#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    string num = "10200";
    int k = 1;

    int n = num.size();
    if (n == k)
    {
        return 0;
    }
    else
    {

        vector<int> result;
        for (char c : num)
        {
            int digit = c - '0';
            result.push_back(digit);
        }

        for (int i = 0; i < n; i++)
        {
            if (s.empty())
            {
                s.push(result[i]);
                continue;
            }
            if (s.top() > result[i] && k > 0)
            {
                s.pop();
                s.push(result[i]);
                k--;
            }
            else
            {
                s.push(result[i]);
            }
        }
        while (true)
        {
            if (k == 0 || k < 0)
            {
                break;
            }
            if (k > 0)
            {
                s.pop();
                k--;
            }
        }
    }

    int z = s.size();
    int a = s.size();
    vector<int> v(z);
    for (int i = 0; i < a; i++)
    {
        z--;
        v[z] = s.top();

        s.pop();
    }

    num.clear();
    int flag = 1;
    for (int nums : v)
    {
        if (flag == 1 && nums == 0)
        {
            continue;
        }
        if (flag == 1 && nums != 0)
        {
            flag = 0;
        }
        num += std::to_string(nums);
    }
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i];
    }
}
