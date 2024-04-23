#include <iostream>
#include <vector>
using namespace std;
// 2d vectors(vectors of vector) can have variable columns size and can increase the size of the rows
vector<int> a = {1, 2, 3, 4};
vector<int> b = {5, 6};
vector<vector<int>> c = {{a}, {b}}; // vecot of vector