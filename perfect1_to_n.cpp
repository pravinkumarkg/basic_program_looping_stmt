#include <iostream>
using namespace std;

int main() {
	int i,j,end,sum=0;
	cin>>end;
	for(int i=1;i<end;i++)
	{
		sum=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
				
			}
		}
		if(sum==i)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
