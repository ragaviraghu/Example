#include<iostream>
using namespace std;
int main()
{ int num,original,reverse=0;
cout<<"Enter the number : "<<endl;
cin>>num;
original=num;
while(num!=0)
{int reminder=num%10;
reverse=reverse*10+reminder;
num=num/10;
}
cout<<"The reversed number is : "<<reverse<<endl;
if(original==reverse)
{cout<<"The given number "<<original<<" is a palindrome"<<endl;
}
else
{cout<<"The given number "<<original<<" is not a palindrome"<<endl;
}
return 0;
}


