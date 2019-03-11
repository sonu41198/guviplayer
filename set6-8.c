#include<stdio.h>
void main()
{
char s[50],a[10];
int i,j;
for(i=0;i!='\0';i++)
{
scanf("%c",&a[i])
}
for(j=0;j!='\0';j++)
{
scanf("%[^\n]",&s[j]);
}
if(s[j]==a[i])
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
