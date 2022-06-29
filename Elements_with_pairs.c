#include<stdio.h>
int main()
{
    int n,a[100],i,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    if(n%2==1)
    printf("%d",x);
    
}