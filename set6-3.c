#include <stdio.h>

int main(void) 
{
	char a[30];
	int i,count=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		count=count+1;
	}
	printf("%d",count);
	return 0;
}
