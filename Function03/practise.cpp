#include <iostream>
using namespace std;

void f(int x = 6, float f = 4.5)
{
    cout << x << " " << f;
}
int main()
{
    int x = 10, y = 20;
    float z = 9.7;
    bool k = true; // will be passed as 1
    f(x, y);
    cout << endl;
    f(z); // 9.7 converted to 9
    cout << endl;
    f(k); // error: cannot convert from
}
// int=>float without warning because of implicit  conversion in C++