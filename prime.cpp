//Program for finding number is Prime or not.

#include<iostream>
using namespace std;
int main()
{
  int num, count=0;
  
  cout<<"Enter which number u want to cheak prime or not?"<<endl;
  cin>>num;
  
  for(int i=1;i<=num;i++)
  {
  	if(num%i==0){
  		count++;
	  }
  	
  }
  if(count==2)
  {
  	cout<<"Number is Prime..!";
  }
  else{
  	
  	cout<<"Number is not Prime..!";
  }
	return 0;
}
