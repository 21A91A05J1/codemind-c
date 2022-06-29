#include<stdio.h>
int main()
{
    int n,i,j,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[j]==a[i] && i!=j)
            {
                a[i]=-1;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        if(a[k]!=-1)
        {
            s+=a[k];
        }
    }
    printf("%d",s);
}