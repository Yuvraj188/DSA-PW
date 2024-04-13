#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> prices = {2, 1, 4};
    int profit;
    int temp = 0;
    int i = 0;
    int j = prices.size() - 1;
    while (i < j)
    {
        profit = prices[j] - prices[i];
        // if(temp)
        temp = max(profit, temp);
        if (prices[i] > prices[j])
        {
            i++;
        }
        if (prices[j] < prices[j - 1])
        {
            j--;
        }
    }

    cout << temp;
}
