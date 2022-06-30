#include<stdio.h>
int main()
{
    int n,m,a[100],b[100],i,j,f=0,c=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {if(a[i]!=-1)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            a[j]=-1;
        } }
    }
    for(i=0;i<n;i++)
    {if(b[i]!=-1)
    {
        for(j=0;j<m;j++)
        {
            if(b[i]==b[j] && i!=j)
            b[j]=-1;
        } }
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j] && a[i]!=-1 && b[j]!=-1 )
            {
                f=1;
                break;
            }
        }
        if(f==0 && a[i]!=-1) { c++;  }
    }
    for(i=0;i<m;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j] && a[j]!=-1 && b[i]!=-1 )
            {
                f=1;
                break;
            }
        }
        if(f==0 && b[i]!=-1) { c++;   }
    }
    printf("%d",c);
}