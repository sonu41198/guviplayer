    
#include <stdio.h>

int main(void) 
{
	char a[20];
	int i,count=0;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]=='(')
	    {
	        count++;
	    }
	    if(a[i]==')')
	    {
	        count--;
	    }
	}
	if(count==0)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	return 0;
}
