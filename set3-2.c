#include <stdio.h>

int main(void) 
{
	int n,k,i,l;
	scanf("%d %d",&n,&k);
	if(n>k)
	{
		l=n;
	}
	else
	{
		l=k;
	}
	for(i=l;i>=2;i--)
	{
		if(n%i==0 && k%i==0)
		{
			printf("%d",i);		
		}
	}

	return 0;
}
