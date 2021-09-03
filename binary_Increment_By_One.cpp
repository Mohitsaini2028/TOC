#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
	long bn1,bn2=1;
	int i=0, r=0;
	int sum[20]; 
	cout << "-----------------------------------\n";
	cout << " Enter the number in Binary: ";
	cin>> bn1;
	
  while (bn1 != 0 || bn2 != 0) 
  {
   sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
   r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
   bn1 = bn1 / 10;
   bn2 = bn2 / 10;
  }
  if (r != 0) {
   sum[i++] = r;
  }
  --i;
  cout<<" After Increment : ";
  while (i >= 0) {
   cout<<(sum[i--]);
  }
   cout<<("\n");  
 }  

//output
/*
  Enter the number in Binary: 11
 After Increment : 100 
*/