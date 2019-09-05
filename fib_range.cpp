#include <iostream>
using namespace std;

int main() {
	int start,end;
	cin>>start>>end;
	int n1=0,n2=1,n3=0;
	while(n3<=end)
	{
		if(n3>=start)
		{
			cout<<n3<<" ";
		}
			n3=n1+n2;
			n1=n2;
			n2=n3;
		
	}
	return 0;
}
