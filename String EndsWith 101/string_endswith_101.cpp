// Design a Program for creating a machine that accepts the string always ending with 101.

#include <bits/stdc++.h>

using namespace std;
bool has101(string s){
    int len = s.length();
    string temp = "";
    temp += s[len-1];
    temp += s[len-2];
    temp += s[len-3];
    if(temp == "101"){
        return true;
    }else{
        return false;
    }
}
int main()
{
    cout<<"Design A Program For Creating A Machine That Accepts The String Always Ending With 101."<<endl;
    string s;
    cout<<"Enter The String You Want To Check : ";
    cin>>s;
    bool isTrue = has101(s);
    if(isTrue){
      
        cout<<"Your String Is Accepted By Machine : "<<s<<endl;
        cout<<"Thank You For Using !!!"<<endl;
        cout<<"***************************"<<endl;
    }else{;
        cout<<"Your String Is \"Not Accepted\" By Machine : "<<s<<endl;
        cout<<"Thank You For Not :) Using !!!"<<endl;
    }
    return 0;
}
