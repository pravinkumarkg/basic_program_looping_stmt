#include <iostream>
using namespace std;

int main() {
	int n,first=0;
	cin>>n;
	first=n;
	while(first>=10)
	{
	first/=10;
	}
	cout<<first;
	return 0;
}
