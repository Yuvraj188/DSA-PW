// greatest common divisor program
// find hcf of two given numbers
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
}
int main()
{
    int a, b;
    cout << "enter the number 1 and number 2";
    cin >> a >> b;
    cout << gcd(a, b);

    // another efficient way which we will se in the recursion problem using euclid 's algorithm.
}