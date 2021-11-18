#include <iostream>
using namespace std;

bool isDivisible(int num){
    if(num%2 == 0){
        return true;
    }
    return false;
}


int main ()
{
  
  int no;
  cout << "Enter The Number : ";
  cin>>no;
  
  if (isDivisible(no)){
  	cout<<"Number is Divisible by 2:";
  }
  else{
  	cout<<"Number is Not Divisible by 2:";
  }
  
}
