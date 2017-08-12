//Program to create Calculator which perform some operation like(+,*,-,/,s).
#include<iostream>    
#include<math.h>
using namespace std;
int main()
{
	double n1,n2;
	char operation, redo;
	do
	{
		cout<<"select operation u want to perform (+,-,*,/,s)\n";
		cin>>operation;
		cout<<"enter 2 numbers for performing operation";
		cout<<(operation)<<endl;
		cout<<"First number:-"<<endl;
		cin>>n1;
		cout<<"Second number:-"<<endl;
		cin>>n2;
		
		switch(operation)
		{
      //Perform Additon operation.
			case '+': 
			   cout<<"The addition of two numbers"<<"("<<n1<<","<<n2<<")"<<"is:-"<<endl;
               cout<<n1+n2<<endl;
               break;
      //Perform Substraction Operation.
            case '-':
            	cout<<"The substraction of two numbers"<<"("<<n1<<","<<n2<<")"<<"is:-"<<endl;
            	cout<<n1-n2<<endl;
            	break;
      //Perform Multiplication Operation.
            case '*':
            	cout<<"The multiplication of two numbers"<<"("<<n1<<","<<n2<<")"<<"is:-"<<endl;
                cout<<n1*n2<<endl;
                break;
      //Perform Division Operation.
            case '/':
            	cout<<"The Division of two numbers"<<"("<<n1<<","<<n2<<")"<<"is:-"<<endl;
            	if(n2==0)
            	{
            		cout<<"input is invalid";
				}
				cout<<n1/n2<<endl;
				break;
     //Perform Swapping Operation.
			case 's':
				cout<<"The Swapping operation of numbers"<<"("<<n1<<","<<n2<<")"<<"is:-"<<endl;
				cout<<"First Number:-"<<n2<<endl<<"Second Number:-"<<n1<<endl;				
		}
		cout<<"Do u want to cntinue?"<<endl;
		cin>>redo;
		
	}while(redo=='y' || redo=='Y');
	return 0;
}
