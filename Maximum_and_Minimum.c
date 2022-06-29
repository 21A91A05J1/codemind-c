#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,f=0,max=0,min=99999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j] && i!=j)
                {
                    c++;
                    a[j]=-1;
                }
            }
            if(a[i]==c)
            {
                if(a[i]>max)
                {
                    max=a[i];
                }
                if(a[i]<min)
                {
                    min=a[i];
                }
                f=1;
            }
        }
    }
    if(f==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",min,max);
    }
}