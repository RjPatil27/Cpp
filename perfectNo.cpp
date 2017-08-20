/*Program for finding the Perfect Number.
Perfect number is a positive number which is sum of all positive divisiors excluding that number.
for example: 6 is perfect number. Because 6 is divided by 1, 2, 3 and
1+2+3=6
*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
   int i=1,j=1,sum=0,num;
   
   cout<<"Enter from how many number u want to select the perfect number:-";
   cin>>num;
   
   while(i<=num)
   {
   	
   	while(j<=num)
   	{
   		
   		if(j<i)
   		{
   			if(i%j==0)
   			sum=sum+j;
		   }
		   j++;
	   }
	   if(sum==i)
	   {
	   	cout<<i<<" is a perfect number"<<"\n";
	   }
	   i++;
	   j=1;
	   sum=0;
	   }	
	
	return 0;
}
