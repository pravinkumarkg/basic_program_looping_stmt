#include <iostream>
using namespace std;

int main() {
	int num,start,end,last_digit,sum,i,j;
	long fact;
	cin>>start>>end;
	for(int i=start;i<=end;i++)
	{
		num=i;
		sum=0;
		while(num>0)
		{
			last_digit=num%10;
			fact=1;
			for(int j=1;j<=last_digit;j++)
			{
				fact=fact*j;
			}
			sum+=fact;
			num/=10;
		}
		if(sum==i)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
