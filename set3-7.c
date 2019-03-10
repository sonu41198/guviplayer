#include <stdio.h>

int main(void) 
{
	char c[20];
	scanf("%s",c);
	for(int i=0;c[i]!='\0';i++)
	{
		if(c[i]>96)
		{
			c[i]=c[i]-32;
		}
		else if(c[i]<91)
		{
			c[i]=c[i]+32;
		}
	}
	printf("%s",c);
		
		
		return 0;
}
