#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	cout<<"Enter The Number : ";
	cin>>num;
    cout<<"\n\nNumber of Zeroes : "<<count(num.begin(),num.end(),'0');
    cout<<"\nNumber of Ones : "<<count(num.begin(),num.end(),'1');
    
}
