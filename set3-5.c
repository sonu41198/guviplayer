#include<stdio.h>
#include<string.h>
int main()
{
char s[100][200],a[100];
int i,n,j;
    printf("enter the no of strings");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
     for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
         if(strlen(s[i])<strlen(s[j]))
          {
              strcpy(a,s[i]);
              strcpy(s[i],s[j]);
              strcpy(s[j],a);
          }
     }
     }
     for(i=1;i<=n;i++)
     {
         printf("%s\n",s[i-1]);
     }
     return 0;
}
