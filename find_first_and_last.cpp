#include <iostream>
using namespace std;

int main() {
	int n,first=0,last=0;
	cin>>n;
	first=n;
	while(first>=10)
	{
		first/=10;
	}
	last=n%10;
	cout<<"first digit:"<<first<<" "<<"\n"<<"last digit:"<<last;
	return 0;
}
