#include <stdio.h>
 
int main(void) 
{
	char s[50];
	scanf("%s",s);
	if(s[0]=='S' || s[0]=='s')
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
