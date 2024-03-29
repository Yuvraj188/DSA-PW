// vector=>dynamic array
// whenever vector full and need  to add element, it will automatically increase the size by creating new array double size and pasting current elements in it.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> k; // need not to mention the size
    // k[0]=6;//will give error
    k.push_back(10);
    cout << k.size() << endl;
    cout << k.capacity() << endl;
    k.push_back(4);
    cout << k.size() << endl;
    cout << k.capacity() << endl;
    k.push_back(6);
    cout << k.size() << endl;
    cout << k.capacity() << endl; // so capacity becomes direct 2 to 4
    k.push_back(7);
    cout << k.size() << endl;
    cout << k.capacity() << endl;
    k.push_back(9);
    k[0] = 6; // will not give errror because before when we do this that time array not given space it is empty so push_back given the size and capacity increases  from 0->1,1->2,2->4,4->8 so increases the capacity

    // for update and access we can use [] but for inserting input not use [] use push_back
    cout << k[1];
}