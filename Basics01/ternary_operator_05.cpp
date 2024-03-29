// condition?true:false
#include "iostream"
using namespace std;
int main() {
    int x;
    cout<<"enter number"<<endl;
    cin>>x;
    x%2==0?cout<<"EVEN":cout<<"odd";
    return 0;
}
//ternary operator return the answer also so we can assign it to variable or put in cout statement
//in ternary operator solve from left to right and in assignment also
//ex=> x=5>8?10:1!=2<5?20:30;  answer=30