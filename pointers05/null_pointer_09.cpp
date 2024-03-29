#include <iostream>
using namespace std;
int main()
{
    int *ptr = NULL; // so a pointer takes address of any garbaje value which we dont want so we WILL GIVE IT NULL SO IT GET 0 ADDRESS
    cout << ptr << endl;
    cout << *ptr;
    // ALSO NULL='\0'=0 WE CAN PUT ANYTHING ALL HAVE SAME MEANING
    // '\0'=>NULL CHARACTER WHICH HAS ASCII VALUE 0
}