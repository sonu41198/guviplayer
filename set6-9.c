#include <stdio.h>
#include <conio.h>
int main()
{
    
     int a[100000],Num,i,count;
    scanf("%d",&Num);
    for(i=0;i<Num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<Num;i++)
    {
        if(a[i]==0)
        {
           count =i;
        }
    }
    for(i=0;i<count;i++)
    {
        if(a[i]!=0)
        {
        printf("%d ",a[i]);
        }
    }
    return 0;
}
