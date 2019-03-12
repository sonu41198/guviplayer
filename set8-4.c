#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,i,sum=1;
    scanf("%d %d",&n,&m);
    while(m!=0)
    {
        sum=sum*n;
        m--;
    }
    printf("%d",sum);
    return 0;
}
