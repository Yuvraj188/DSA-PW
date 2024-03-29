// reverse array without extra array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 6, 7, 8};
    int i = 0;
    int j = v.size() - 1;
    int temp;
    while (i < j)
    {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}