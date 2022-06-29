#include<stdio.h>
int main()
{
    int n,a[100],i,p,q,f=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]<p || a[i]>q)
        {
            if(a[i]>max)
            {
                max=a[i];
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
        printf("%d",max);
    }
}