#include<stdio.h>
int main()
{
    int n,m,a[100],b[100],i,j,k,c=0,x;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d ",&b[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                a[j]=-1;
            }
        }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c++;
                break;
            }
        }
        }
    }
    printf("%d",c);
}