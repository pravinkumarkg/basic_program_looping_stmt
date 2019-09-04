#include <iostream>
using namespace std;

int main() {
	int m,n,i,j,temp,flag=0;
	cin>>m>>n;
	if(m>n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	for(i=m+1;i<n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}	
		if(flag==0)
		{
		cout<<i<<" ";
		}
	}
	
	return 0;
}
