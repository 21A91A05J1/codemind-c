#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            printf("%d ",a[j]);
        }
    }
    for(j=0;j<n;j++)
    {
        if(a[j]%2==1)
        {
            printf("%d ",a[j]);
        }
    }
}