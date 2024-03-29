//rules for float numbers operations 
// float operation float =float
// int operation int=int 
// float operation int =float
// variable naming rules =>
// 1)variable can start from an alphabet or underscore _ or $.
// 2)special characters except _ and $ are not allowed.
// 3)some particular keywords are not allowed
// 4)blanks and commas are not allowed
#include <iostream>
using namespace std;
// we use namespace std otherwise we have to write  std :: cout<<"hello"

int main() {

    float a = 5.1;
    float b=5.0;
    cout << "value of a is " << a <<endl<< b <<endl;
    cout <<5.0<<endl;//still print 5 only without decimal
    cout <<5+10.0<<endl;
    cout <<5+3.50<<endl;
// so the conclusion is cout dont print 0 after point but if any number after point it will be printed
//note=>in c++ the operands of a%b should be both integers otherwise it will give error.
float m=5,n=6;
//cout<<m%n;//this will give error because a and b are floats
   cout<<"the modulo is when a<b  "<< 4%5<<endl;
   cout<<"the modulo is when a>b  "<< 6%5<<endl;
   //if in modulo  a==b then answer will be 0
   //if in modulo a<b then answer will be a
   // a%(-b)=a%b answer will be same in both the cases no effect of negative sign if on second number
   cout<<20%-3<<endl;
   //(-a)%b=-c
   cout << -4%5<<endl;
   cout << -21%5<<endl;
   cout <<(-12)%-(5)<<endl;
bool x=true;
bool y=false;
cout<<"boolean vaue print and used as 0 or 1  "<<x <<y<<endl;
bool flag=-20;
bool k=0.4;
cout<<k<<endl;
cout<<flag<<endl;
bool f=0;
cout<<f;
    return 0;

float z=2/7;
cout<<z;//will give answer 0 but 
float v=2/7.0;
cout<<v;//will give answer in float points
}
// blank spaces may be inserted bw two words in c++ but not inserted within a variable name ex int    x   =  1;
// ex=int hel lo = 1; will give error no space bw variable names 
