#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i]; // because already we have given size 10 so can use []
    }
    v.at(2) = 96; // for updation using v.at
    cout << "using at for accessing value" << v.at(2) << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << v[i]; // because already we have given size 10 so can use []
    }

    vector<int> k;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // imput when size not given using push_Back
    }

    // to sort the vector we use sort function
    sort(k.begin(), k.end());
    for (int i = 0; i < 3; i++)
    {
        cout << k[i];
    }
}

// vectors are passed by value each time new vector is created which is same having different location but we pass by reference using &ex=void change(vector<int>&k){}