#include<stdio.h>
#include<conio.h>
int main()
{
int k=0,i,count=0;
char a[1000],rev[1000];
clrscr();
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
k=0;
 for(i=count;i>=0;i--)
{
rev[k]=a[i];
k++;
}
rev[k]='\0';
for(i=0;i<=count;i++)
{
  printf("%c",rev[i]);
}
 getch();
 return 0;
}
