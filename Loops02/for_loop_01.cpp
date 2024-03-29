#include <iostream>
using namespace std;
int main()
{
    // int i;
    // for(int i=0;i<=5;i++);
    // cout<<i;//will take garbaje value as the for loop i is unavailable outside for loop both i are different and have different address space

    // int i=3;
    // for(i=10;i<=20;i++);
    // cout<<i<<endl;//the value of i will 21 here because for loops uses outside i address
    // return 0;

    // for(int i=6;i<=8;i++);//i is iterator here
    // cout<<i;// will give error because cannot accsss for loop i outside the block

    int n;
    cout << "enter the value of n ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int i = 0; i <= n; i++)
        {
            cout << i << "and" << endl;
        }
    }
    // we have taken same variable for both loops but it will have different address spaces  as they are in two different blocks.
}
