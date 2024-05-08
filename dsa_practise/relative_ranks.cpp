#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> temp = {1, 23};
    vector<int> k;
    k = temp;
    k[0] = 6;
    for (int i = 0; i < k.size(); i++)
    {
        cout << temp[i];
    }
}