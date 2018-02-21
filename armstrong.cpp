#include<iostream>
using namespace std;
int main()
{
int arm=0,a,num,original; 
cout<<"Enter the number : "<<endl;
 cin>>num;
original=num;
while(num>0)
{
a=num%10;
num=num/10;
arm=arm+a*a*a;
}
if(arm==original)
{
cout<<"The given number "<<original<<" is an armstrong number"<<endl;
}
else
{
cout<<"The given number "<<original<<" is not an armstrong number"<<endl;
}
return 0;
}
