#include<iostream>
using namespace std;
int main()
{
	string var1;
	cin>>var1;
	
	int var2=0;
	
	for(int i=0;i<=var1.length();i++)
	{
			if(var1[i] == '0')
				cout<<"\n";
			else
				if (var1[i+1]=='1' && var1[i+2]=='1')
				var2 = 1;
				
	}

	if(var2==1)
		cout<<"\n String Contain 3 Consecutive Ones";
	else
	    cout<<"\n String not Containing 3 Consecutive Ones";
		
}
