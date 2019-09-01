#include <iostream>
using namespace std;

int main() 
{
	int power=1,base,exponent;
	cin>>base>>exponent;
	for(int i=1;i<=exponent;i++)
	{
		power=power*base;
	}
	cout<<power;
	return 0;
}
