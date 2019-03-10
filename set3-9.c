#include <stdio.h>
int main(void) 
{
	int s,e,i,j,c=0;
	scanf("%d %d",&s,&e);
	for(i=s;i<=e;i++)
	{
		for(j=2;j<=e;j++)
		{
			if((j*j)==i)
			{
				c=c+1;
			}
		}
	}
	printf("%d",c);
	return 0;
}
