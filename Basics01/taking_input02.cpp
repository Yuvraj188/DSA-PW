// taking i/p , operators , typecasting ,hierarchy of operators ,char and ascii
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter two number";
    cin>>x>>y;
    cout<<"product of given number is"<<x*y;

//operators =>arithmetic,logical,relational(==,!=,>),assignment(=,+=,-=,/=,*=,%=) ,Bitwise
int z=3;
// cout<<z=4; will arise error
cout<<(z=4)<<endl;   // assignment operator returns the value assigned to it.first z will be assignned 4 then z will be output like cout<<z;
// x+=8 is faster than x=x+8 technically
bool p=false;
bool q=false;
bool r=true;
cout<<(p==q==r)<<endl;//go left to right p==q will give 1 as p and q are equal so now check 1==r thats true so result will be 1


char ch='a';//contain only single character and  in single quotes
// char ch='ab';not allowed will give warning
//char gk="a";//will give error only use single quoutes
cout<<(int)ch<<endl;//conversion from char to int using type casting
//each character has a ascii value associated to it
//learn only threee values 'A'=>65 'a'=>97  '0'=>48

bool mp=true;
cout<<mp+9<<endl;//outputs 10 because true + 9 = 10

int xm=1;
float hj=(float)xm;
cout<<hj/2;

// printing fractional part
//for ex=>x=9.7   -> 0.7
//for ex=>x=8.17   -> 0.17
//for ex=>x= -1.3  -> 0.7 

//check hierarchy of operators 

    return 0;
}