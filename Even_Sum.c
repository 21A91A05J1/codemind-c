#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,x=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            x=x+a[i];
        }
    }
    printf("%d",x);
}