// #simply pass like 1d vectors no need to specify size
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<vector<int>> v(3);                    // it can store 3 vectors
    vector<vector<int>> k(3, vector<int>(4));    // this is vector of 3 rows and 4 columns or we can put 3 vector each of size 4
    vector<vector<int>> k(3, vector<int>(4, 2)); // this will initialize this 2d vector with allvalues 2

    cout << k.size();    // this will return number of rows in 2d vector
    cout << k[0].size(); // for columns size but it may give different size because each row can have different number of columns.

    // in 2d vector we push back a vector not a value and pop back a vector not a value
}