#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v(10); // we in[itialized a vector with size and capacity ==10 and all elements initialized with 0

    // vector<int v(10,6);//instead of initializing with 0 initialize all elemnets by 6
    vector<int> v;
    v.push_back(6);
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(0);
    v.push_back(4);
    v.push_back(66);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.pop_back(); // reduce the size but not changes capacity
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}