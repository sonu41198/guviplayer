#include<stdio.h>
int main()
{
    char a[50];
    int i=0;
    scanf("%[^\n]s",a);
    printf("%c%c",a[i],a[i+3]);
    return 0;
}
