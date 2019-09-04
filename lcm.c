#include <stdio.h>

int main(void) {
	int i,n1,n2,result,lcm=1;
	scanf("%d%d",&n1,&n2);
	result=(n1>n2)?n1:n2;
	i=result;
	while(1)
	{
		if(i%n1==0&&i%n2==0)
		{
			lcm=i;
			break;
		}
		i+=result;
	}
	printf("lcm of %d and %d is %d ",n1,n2,lcm);
	return 0;
}
