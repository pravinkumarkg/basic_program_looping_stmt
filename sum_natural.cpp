#include <iostream>
using namespace std;

int main() {
	int start,end,sum=0;
	cin>>start>>end;
	for(start=1;start<=end;start++)
	{
		sum+=start;
	}
	cout<<sum;
	return 0;
}
