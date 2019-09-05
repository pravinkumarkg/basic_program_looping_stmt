#include <iostream>
using namespace std;

int main() {
	int n,i,j,flag=1;
	cin>>n;
	for(i=2;i<=n;i++)
	{
	
		if(n%i==0)
		{
			flag=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					flag=0;
					break;
				}
			}
		if(flag==1)
		{
			cout<<i<<" ";
		}
		}
	
	}
	return 0;
}
