#include<stdio.h>
int main()
{
    int n,i=0,f=0;
    scanf("%d",&n);
    int d[100];
    while(n>0)
    {
        d[i]=n%10;
        n=n/10;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        for(int k=0;k<i;k++)
        {
            if(d[j]==d[k] && k!=j)
            {
                printf("Not Unique Number");
                f=1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==0)
    {
        printf("Unique Number");
    }
}