#include <iostream>
using namespace std;

int main() {
	int m,n,i,j,sum=0,flag=0;
	cin>>m>>n;
	for(i=m+1;i<=n;i++)
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
			sum+=i;
		}
	}
	cout<<sum;
	return 0;
}
