#include <stdio.h>

int main(void) 
{
	int n,a,count=0,rem;
	scanf("%d %d",&n,&a);
	while(n!=0)
	{
		rem=n%10;
		if(rem==a)
		{
			count=count+1;
		}
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
