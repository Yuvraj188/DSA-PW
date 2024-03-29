#include <iostream>
using namespace std;
int main()
{
    // print alphabet
    // for(int i=65;i<=90;i++){
    //     cout<<(char)i<<endl;
    // }
    // prime number program

    // int k;
    // cout<<"enter the number";
    // cin>>k;
    //     // We only need to check divisibility up to sqrt(num)
    //     // int limit = sqrt(num); and put  it in a loop from 2 to <=limit
    //     bool isPrime=true;
    //     //for i=2 the control will not enter in loop and directly go to if else condition
    //     if(k==1){
    //         cout<<"1 is neither prime nor composite";
    //     }
    // for(int i=2;i<=(k/2);i++){
    //     if(k%i==0){
    //         isPrime=false;
    //         break;
    //     }}
    //     if (isPrime) {
    //         cout << "The given number is prime.";}
    //     else{
    //         cout << "The given number is not prime.";}

    // Wap to count digits of a given number
    // int n;
    // cout<<"enter the number";
    // cin>>n;
    // int count=0;
    // if(n == 0){
    //     count=1;
    // }
    // while(n>0){
    //     count++;
    //     n/=10;

    // }
    // cout<<count;

    // Wap to print sum of digits of a given number
    //  int n;
    //   cout<<"enter the number";
    //  cin>>n;
    //  int sum=0;

    // while(n>0){
    // sum=sum+n%10;
    // n=n/10;
    // }
    // cout<<sum;

    //  wap to print reverse of a given number
    // int n;
    // cout<<"enter the number";
    // cin>>n;
    // int num,rev=0;
    // while(n>0){
    // num=n%10;
    // n/=10;
    // rev=rev*10+num;//first multiply then add
    // }
    // cout<<rev;

    // print sum of series  1-2+3-4+5-6 upto n
    //   int n;
    //   cout<<"enter till series";
    //   cin>>n;
    //  int sum=0;
    //  while(n>=0){
    //      if(n%2==0){
    //          sum-=n;
    //      }else{
    //          sum+=n;
    //      }
    //      n--;

    //     }
    //     cout<<sum;
    // this is inefficient method and can be solved without loops
    //  for even (1-2)+(3-4)+(5-6)= -1 + -1 + -1 so 6 numbers give -3 so n numbers give -n/2
    // for odd (1-2)+(3-4)+5=-1+-1+5=-2+n=>-(n-1)/2+n
    // so soln without loops
    // if((n%2)==0){
    //     cout<<(-n/2);}
    // else{
    //     cout<<(-(n-1)/2)+n;
    // }

    // calculate factorial of a number using loops

    // int n;//n should be initailized with 1
    // cout << "Enter a positive integer: ";
    // cin >> n;
    // int fact=1;
    // while(n>1){
    //     fact=fact * n ;
    //     n-=1;
    // }
    // cout<<fact;
    //
    // fibonachhi series using loops
    // int n;
    // cout << "enter the number";
    // cin >> n;
    // int c = 1;
    // int p = 0;
    // int sum = 0;
    // while (n > 1)
    // {

    //     sum = p + c;
    //     p = c;
    //     c = sum;
    //     n--;
    // }

    // cout << c;
    // calculate 'A' raised to power 'B' using loop for positive as well as -ve number also
    float a, b;
    cout << "enter the number and power of number";
    cin >> a >> b;
    float sum = 1;
    bool f = false;
    if (b < 0)
    {
        f = true;
        b = -b;
    }
    if (a == 0 && b == 0)
    {
        cout << "not defined";
    }
    else
    {
        for (int i = b; i > 0; i--)
        {
            sum = sum * a;
        }

        if (f)
        {
            cout << 1 / sum;
        }
        else
        {
            cout << sum;
        }
    }
    return 0;
}

// segmentation fault when infinite loop happens