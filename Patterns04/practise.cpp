#include <iostream>
using namespace std;
int main()
{
    int h, b;
    cout << "enter height and base of the traingle";
    cin >> h >> b;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j += 2)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
