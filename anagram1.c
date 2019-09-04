#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	int a,b,i,j,count=0;
	a=strlen(str1);
	b=strlen(str2);
	
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if(str2[j]==str1[i])
				{
					str2[j]='*';
					count++;
					
				}
			}
		}
	
	if(count==b)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

