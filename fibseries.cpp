#include <iostream>
using namespace std;

int main() {
	int n1=0,n2=1,n3=0,fib;
	cin>>fib;
	for(int i=1;i<=fib;i++)
	{
	cout<<n3<<" ";
	n3=n1+n2;
	n1=n2;
	n2=n3;
		
	}
	
	return 0;
}
