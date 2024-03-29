#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n%2==0){
        cout<<"number is even";

    }
    else{
        cout<<"number is odd";
    }
   

    // print the absolute value of integer
    //can be done by if else also in else cout<<-n;
    // -3=3
    // 7=7
    int x=-5;
    n=abs(x);
cout<<n;


//check whether number is 3 digit or not 
cout<<"enter the number";
cin>>n;
if (n>=100 && n<=999) {
    cout<<"3 digit number";
    }
    // use || for or condition
else{
    cout<<"not a 3 digit number";
}
//question tell if number divisibe by 3 and 5 use && 
//question tell if number divisibe by 3 or 5  use ||
//check whether character alphabet or not 
char c;
cout<<"enter the character"<<endl;
cin>>c;
// 'A'=>65 'a'=>97
if (((int)c >= (int)'A' && (int)c<=(int)'Z' )||((int)c>=(int)'a'&& (int)c <= (int)'z')) {
    cout << "alphabet"<<endl;
}
else {
    cout << "Not an Alphabet"<<endl;
}
//program for divisible by 5 or 3 but not divisible by 15
if (((n%5==0)||(n%3==0))&&(n%15!=0)){
    cout<<"number is divisible by 5 or 3 but not by 15";
}

//in or condition it will check only first condition if true and if not true then go to second condition but in && it will check all conditions until get one false
//if all if then check every if and multiple will be executed
// else if then terminate when one condition is true and not check remaining only one will be executed and if all false then else will be executed
return 0;
}

