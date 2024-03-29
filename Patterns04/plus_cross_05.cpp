// for this we will be given n=odd value first create a plus sign
#include <iostream>
using namespace std;
int main()
{
    // plus pattern
    //  int n;
    //  cout << "enter the value of n";
    //  cin >> n;
    //  int mid = (n / 2) + 1;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= n; j++)
    //      {
    //          if ((i == mid) || (j == mid))
    //          {
    //              cout << "*";
    //          }
    //          else
    //          {
    //              cout << " ";
    //          }
    //      }
    //      cout << endl;
    //  }

    int n;
    cout << "enter the value of n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == j) || (i == n - (j - 1))) // in second condition we can put i+j=n+1 also
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
