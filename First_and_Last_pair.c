#include<stdio.h>
int main()
{
    int n,a[100],i,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n/2;i++)
    {
        printf("%d %d ",a[i],a[n-i+1]);
    }
    if(n%2==1)
    printf("%d %d",a[(n/2)+1],x);
    
}