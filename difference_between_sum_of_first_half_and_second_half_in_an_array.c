#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,x=0,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n/2;i++)
    {
       x+=a[i];
    }
    for(i=(n/2)+1;i<=n;i++)
    s+=a[i];
    printf("%d",abs(x-s));
    
}