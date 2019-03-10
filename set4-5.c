#include <stdio.h>
#include<string.h>
int main()
{
    char s[50],x;
    int i,j,n,max=0,count=0;
    scanf("%[^\n]s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        count=1;
        if(s[i]=='+')
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                count++;
                s[j]='+';
            }
        }
        if(count>=max)
        {
            max=count;
            x=s[i];
               printf("%c",x);
        }
    }
    
    return 0;
}    
