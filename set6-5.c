#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[20],str2[20];
	int i,f;
	scanf("%s %s",str1,str2);
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			if(str1[i]=str2[i])
			{
				f=0;
			}
			else
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{
			printf("no");
		}
		else
		{
			printf("yes");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
