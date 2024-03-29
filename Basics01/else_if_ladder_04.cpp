#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter a character: ";
cin>>ch;
//check whether character is alphabet or not
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
    if((ch=='a')||(ch=='A')){
        cout<<"vowel";

    }
    else if((ch=='e')||(ch=='E')){
        cout<<"vowel";

    }
        else if((ch=='i')||(ch=='I')){
        cout<<"vowel";

    }
        else if((ch=='O')||(ch=='o')){
        cout<<"vowel";

    }
            else if((ch=='u')||(ch=='U')){
        cout<<"vowel";

    }

    else {
        cout<<"not vowel";
    }
}
else{
    cout<<"not character;";
}
return 0;
}
//for triangle use a+b>c or b+c>a or  c+a>b. where a b c are sides 
//>= is valid but =>not valid