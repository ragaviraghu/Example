#include<iostream>
using namespace std;
int main()
{ int num;
cout<<"Enter the number : "<<endl;
cin>>num;
cout<<"The first 5 multiples of number "<<num<<" is : "<<endl;
for(int i=1;i<=5;i++)
{ cout<<i<<" * "<<num<<" = "<<i*num<<endl;
}
return 0;
}
