#include <stdio.h>
int main(void) 
{
	int l,r,i,j,c=0;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++)
	{
		for(j=2;j<=r;j++)
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
