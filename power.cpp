#include<iostream>
using namespace std;
int main()
{int num,power,res=1;
cout<<"Enter the number : "<<endl;
cin>>num;
cout<<"Enter the power : "<<endl;
cin>>power;
for(int i=1;i<=power;i++)
{res=res*num;
}
cout<<" The Result is : "<<res<<endl;
return 0;
}
