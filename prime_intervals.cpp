#include<iostream>
using namespace std;
int main()
{   int start, end, i, j, count=0;
    cout<<"Enter starting number : "<<endl;
    cin>>start;
    cout<<"Enter ending number : "<<endl;
    cin>>end;
    cout<<"Prime Number Between "<<start<<" and "<<end<<" is :"<<endl;
    for(i=start+1; i<end; i++)
	{
		count=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
