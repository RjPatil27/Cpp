/*C++ Program to Toggle the String.
for example:-
Inout:- abCD
Output:- ABcd

*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
 char str[100];
 int length;
 cout<<"Enter the string you want to toggle:-"<<endl;
 cin>>str;
 length = strlen(str);
 for(int i=0;i<length;i++)
 {
    if(str[i]>='a'&&str[i]<='z')
    {
     str[i]=str[i]-32;
    }
    else{
           str[i]=str[i]+32;
        }
 }

cout<<"Required Toggled string is:-"<<endl;
cout<<str<<endl;
 return 0;
}
