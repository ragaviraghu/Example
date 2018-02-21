#include<iostream>
using namespace std;
int main()
{int num,count=0;
cout<<"Enter the number : "<<endl;
cin>>num;
for(int i=2;i<num;i++)
{ if(num%i==0)
{count++;
break;
}
}
if(count==0)
{cout<<"The given number "<<num<<" is a prime number(Yes)."<<endl;
}
else
{cout<<"The given number "<<num<<" is not a prime number(No)."<<endl;
}
return 0;
}
