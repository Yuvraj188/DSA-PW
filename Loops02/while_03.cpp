#include<iostream>
using namespace std;
int main(){
    int i=1;
    // for(;i<10;){
    //     cout<<i;
    //     i++;
    // } 
int j;
while(j<10){
    cout<<i;
    i++;
}
cout<<j;
//no error because j takes garbaje value 
int x=1;

do{
cout<<"hi";
x=x-1;
}while(x==1);
    return 0;
}
// Use a while loop when:
// You do not know the number of iterations in advance, and the loop might not run at all.
// The condition for termination is based on some external factor, such as user input or a flag.
// You want the loop to keep running until a certain condition is met


// Use a for loop when:
// You know the number of iterations in advance, especially when looping over a fixed-size container (like an array or a container with known size).
// You need to initialize a loop variable, check a condition, and increment or update the variable in a single line.
// The loop requires a specific number of iterations, known before the loop starts.