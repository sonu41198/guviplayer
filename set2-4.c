#include <stdio.h>

int main()
{
    int n,i;
    char a[50];
    scanf("%s",a);
    n=strlen(a);
    for(i=n;i>=0;i--)
    {
     if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
     {
         printf("%c",a[i]);
     }
    }
    return 0;
}
