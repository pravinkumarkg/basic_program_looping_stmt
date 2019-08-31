#include <iostream>
using namespace std;

int main() {
	int n,rem,sum;
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n/=10;
	}
	cout<<sum;
	return 0;
}
