#include<stdio.h>
int main()
{
int fact=1,i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=i*fact;
}
printf("%d",fact);
 return 0;
}
