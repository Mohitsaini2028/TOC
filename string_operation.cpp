#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
   //fullName is the string which is converted to uppercase 
    string fName;
    string lName;
    
    cout<<"Enter your First Name : ";
    cin>>fName;
    cout<<"Enter your Last Name : ";
    cin>>lName;
    
    // Concatenation of Two Strings
     string fullName = fName + " " + lName; 
     cout<<"After Concatenation : "<<fullName<<endl;
     
   //using transform() function and ::toupper in STL 
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::toupper); 
     cout<<"After Converting to UpperCase : " << fullName << endl; 
     
   //fullName is the string which is converted to lowercase 
  //using transform() function and ::tolower in STL 
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::tolower); 
     cout<<"After Converting to LowerCase : " << fullName << endl;
     
    //String Length 
    cout << "Length of String : " << fullName.size()<<endl;
    
    //White Space Remove in String
      fullName.erase(remove(fullName.begin(), fullName.end(), ' '), fullName.end());
    cout << "After White Space Removal : " << fullName;
     
     return 0; 
} 


//Output

/*

Enter your First Name : Virat
Enter your Last Name : Kohli
After Concatenation : Virat Kohli
After Converting to UpperCase : VIRAT KOHLI
After Converting to LowerCase : virat kohli
Length of String : 11
After White Space Removal : viratkohli

*/