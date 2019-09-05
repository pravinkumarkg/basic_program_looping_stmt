#include <iostream>
using namespace std;

int main() {
	int n1,n2,sum,num,rem;
	cin>>n1>>n2;
	for(int i=n1;i<=n2;i++)
	{
		sum=0;
		num=i;
		while(num>0)
		{
			rem=num%10;
			sum=sum+rem*rem*rem;
			num/=10;
		}
		if(i==sum)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
