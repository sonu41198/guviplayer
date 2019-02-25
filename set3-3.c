#include <stdio.h>
int main() 
{
    int s[10],k,i=0,p,n,j,m=0;
	scanf("%d %d",&n,&p);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&s[i]);
	}
	j=0;
    while(j<p)
	{
	    scanf("%d",&k);
	    s[n]=k;
	    n++;
	   for(i=0;i<n;i++)
	    {
	        if(s[i]>=m)
	        {
	            m=s[i];
	        }
	    }
	    printf("%d ",m); 
	j++; 
	}
	return 0;
}
