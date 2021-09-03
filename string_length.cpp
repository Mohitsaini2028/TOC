#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int length;
    cout << "Enter an array or string : ";
    cin>>str;
    length = strlen(str);
    cout << "Length of the string is : " << length;
    return 0;
}


//Output
/*
Enter an array or string : 455vvbcnb
Length of the string is : 9
*/
