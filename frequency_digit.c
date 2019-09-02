#include <stdio.h>
#define BASE 10
int main(void) 
{
	long num,n;
	int i,lastdigit;
	int freq[BASE];
	scanf("%ld",&num);
	for(i=0;i<BASE;i++)
	{
		freq[i]=0;
	}
	n=num;
	while(n!=0)
	{
		lastdigit=n%10;
		n/=10;
		freq[lastdigit]++;
	}
	printf("%ld",num);
	for(i=0;i<BASE;i++)
	{
		printf("frequency of %d = %d\n",i,freq[i]);
	}
	return 0;
}
