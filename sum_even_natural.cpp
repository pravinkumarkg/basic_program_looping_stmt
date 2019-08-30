#include <iostream>
using namespace std;

int main() {
	int start,end,sum=0;
	cin>>start>>end;
	for(start=1;start<=end;start++)
	{
		if(start%2==0)
		{
		sum+=start;
		}
	}
	cout<<sum;
	return 0;
}
