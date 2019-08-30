#include <iostream>
using namespace std;

int main() {
	int start,end;
	cin>>start>>end;
	while(start<=end)
	{
		if(start%2!=0)
		{
			cout<<start<<" ";
		}
		start++;
	}
	return 0;
}
