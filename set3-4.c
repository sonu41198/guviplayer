#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[20];
	scanf("%[^\n]s",a);
	int i,flag;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	
	return 0;
}
