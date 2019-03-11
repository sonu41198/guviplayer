#include <stdio.h>
int main()
{
	int n,k,i,j,m=1,flag=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
			for(j=i;j>0;j--)
			{
				m=m*k;
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
