#include <stdio.h>

int main()
{
    int n,a[50],i,j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                t++;
            }
        }
        if(t==1)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
