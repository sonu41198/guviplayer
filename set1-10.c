#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int i,j,n1,n2,c=0;
	scanf("%s %s",str1,str2);
	n1=strlen(str1);
	n2=strlen(str2);
	if(n1==n2)
	{
		for(i=0;i<n1;i++)
		{
			if(str1[i]==str2[i])
			{
				c=c+0;
			}
			else
			{
				c=c+1;
			}
			
		}
		if(c==1)
		{
			printf("\nyes");
		}
		else
		{
			printf("\nno");
		}
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
