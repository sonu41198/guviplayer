#include <stdio.h>

int main(void) 
{
	int n,i,j,m=1,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			m=m*2;
			if(m==n)
			{
				flag=1;
				break;
			}
			
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
