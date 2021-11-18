//Program For PDA Which Accepts Strings Of (0^n)(1^n) n>=1.

#include<iostream>
#include<string.h>
using namespace std;
int top;
char s[10];
class Stack
{
    public:
    void push(int x)
    {
        s[top++]=x;
    }
    void pop(int x)
    {
        s[top--]=x;
    }
};
int main()
{
    int i,n;
    char a[10];
    cout<<"\nProgram For PDA Which Accpets Strings Of (0^n)(1^n)\n";
    cout<<"\nEnter String::";
    cin>>a;
    n=strlen(a);
    Stack st;
    top=-1;
    for(i=0;i<n;i++) 
    {
        if(a[i]=='0' || a[i]=='1')
        {
            if(a[i]=='0')
            {
                st.push(a[i]);
            }
            else
            {
                st.pop(a[i]);
            }    
        }
        else
        {
            break;    
        }    
    }
    if(top==-1)
    {
        cout<<"\nString Accepted.\n";
    }
    else
    {
        cout<<"\nString Rejected.\n";
    }    
    return 0;
}
