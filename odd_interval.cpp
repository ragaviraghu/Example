#include<iostream>
using namespace std;
int main()
{int num1,num2;
cout<<"Enter the first number : "<<endl;
cin>>num1;
cout<<"Enter the second number : "<<endl;
cin>>num2;
cout<<"The odd numbers between the given two numbers is : "<<endl;
for(int i=num1+1;i<num2;i++)
{ if(i%2!=0)
{cout<<i<<endl;
}
}
return 0;
}
