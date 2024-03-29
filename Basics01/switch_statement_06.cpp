// switch(integer expression){
//     case constant1:
//     do this;
//     break;
//     case constant2:
//     do this;
//     break;
//     default:
//     do that;
// }
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter  a number in weekday";
    cin>>x;
    switch(x+0){
        case 1:
        cout<<"Monday";
        break;
        //if we not use break than next statement will also executed it does not check the case then after one get true so we use break
                case 2:
        cout<<"T";
        break;
                case 3:
        cout<<"W";
        break;
                case 4:
        cout<<"TH";
        break;
                case 5:
        cout<<"F";
        cout<<"riday";
        //default will execute when none correct but if case 5 dont have break then also case 5 and default will get executed 
        // break;
        default:
        cout<<"enter week day";
    } 
    // if code dont have default and we put different number than cases than nothing will happen
    // no need to use curly brackets in between case statements 
    //we can put condition or expression also in switch
    int y;
    cout<<"enter nubmer for month ";
    cin>>y;

    switch (if(y<=7 && y%2!=0)||((x>=8)&&(x%2==0))) {
    
    case 1: cout<<"it contain 31 days";
        }
    switch(if(y==4||y==6||y==9||y==11){
        case 1:cout <"30 days";
    }
    switch(y){
        case 2: cout << "28 days";
    }
    return 0;
    }
    //for calculator  cin>>a>>op>>b;
    //if statement ke andar char ki ascii value se comparison hota hai, compiler usese asciii value and can compare char with ascii value