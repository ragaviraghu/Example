#include<iostream>
using namespace std;
int main()
{int num,fact=1;
cout<<"Enter the number : "<<endl;
cin>>num;
for(int i=1;i<=num;i++)
{fact=fact*i;
}
cout<<"The factorial of a given number "<<num<<" is : "<<fact<<endl;
return 0;
}
