#include <iostream>
using namespace std;

int main() {
	int num,rem,rev,orig=0;
	cin>>num;
	orig=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(rev==orig)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not a palindrome";
	}
	return 0;
}
