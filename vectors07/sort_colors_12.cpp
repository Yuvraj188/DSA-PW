#include <iostream>
#include <vector>
using namespace std;
// can be solved by two pass but we will solve by 2 pointers
// also called dutch flag algorithm
int main()
{ // TWO PASS METHOD
  //  vector<int> v = {0, 1, 0, 1, 1, 1, 2, 2, 0};
  //  int f = 0;
  //  int r = v.size();
  //  int i = 0;
  //  int a = 0, b = 0, c = 0;
  //  while (i < r)
  //  {
  //      if (v[i] == 0)
  //      {
  //          a++;
  //      }
  //      else if (v[i] == 1)
  //          b++;
  //      else
  //          c++;
  //      i++;
  //  }
  //  for (int i = 0; i < r; i++)
  //  {
  //      if (i < a)
  //          v[i] = 0;
  //      else if (i < (a + b))
  //          v[i] = 1;
  //      else
  //          v[i] = 2;
  //  }
  //  for (int i = 0; i < r; i++)
  //  {
  //      cout << v[i];
  //  }

  // one pass
  // vector<int> v = {0, 1, 0, 1, 1, 1, 2, 2, 0};
  // vector<int> v = {2, 0, 2, 1, 1, 0};
  // int i = 0;
  // int j = i + 1;
  // int k = v.size() - 1;
  // while (i <= j && j < k)
  // {
  //   if (v[i] == 0)
  //     i++;
  //   if (v[j] == 1)
  //     j++;

  //   if (v[k] == 2)
  //   {
  //     k--;
  //   }
  //   if (i > j)
  //     break;
  //   if (v[j] == 0)
  //   {

  //     v[j] = v[i];
  //     v[i] = 0;
  //   }
  //   if (j > k)
  //     break;
  //   if (v[j] == 2)
  //   {

  //     v[j] = v[k];
  //     v[k] = 2;
  //   }
  // }
  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i];
  // }

  // DUTCH FLAG ALGORITHM  3 pointer problem
  vector<int> nums = {2, 1, 0, 0, 1, 2, 0, 1, 2, 1};
  int l = 0;
  int m = 0;
  int h = nums.size() - 1;
  while (m <= h)
  {
    if (nums[m] == 2)
    {
      nums[m] = nums[h];
      nums[h] = 2;
      h--;
    }
    else if (nums[m] == 0)
    {
      nums[m] = nums[l];
      nums[l] = 0;
      l++;
      m++;
    }
    else
      m++;
  }
}
