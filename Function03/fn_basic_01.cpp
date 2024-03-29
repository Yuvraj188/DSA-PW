// when a program starts the main fn will always start first and one program contain only one main function
//  <void/int/float/char> function_name(int a,int b,int c){
// fn body
// }
#include <iostream>
using namespace std;

int fun(float x, int y)
{ // implicitly convert float to int and int to float
    return x + y;
}
int main()
{
    int a = 5;
    float b = 6.7;
    cout << fun(a, b);
    // cout<<x; x has only scope till that fun function
}