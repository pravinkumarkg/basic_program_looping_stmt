#include <iostream>
using namespace std;

int main() {
	int num,sum=0,last_digit,orig=0,fact;
	cin>>num;
	orig=num;
	while(num>0)
	{
		fact=1;
		last_digit=num%10;
		for(int i=1;i<=last_digit;i++)
		{
			fact=fact*i;
		}
		sum+=fact;
		num/=10;
	}
	if(sum==orig)
	{
		cout<<"strong number";
	}
	else 
	{
		cout<<"not an strong number";
	}
	return 0;
}
