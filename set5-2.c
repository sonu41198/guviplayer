#include <stdio.h>
int main() 
{
	int n,arr[20],i,j,flag=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(arr[i]>arr[j])
		{
			flag=1;
			break;
			
		}
		}
	}
	if(flag==1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
