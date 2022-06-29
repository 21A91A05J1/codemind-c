#include<stdio.h>
int main()
{
    int n,a[100],i,c,b,x=9999,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&c,&b);
    for(i=0;i<n;i++)
    {
        if(c<=a[i] && b>=a[i] || c>=a[i] && b<=a[i])
        {
            if(x>a[i])   x=a[i];
            y=1;
        }
    }
    if(y==1)
    printf("%d",x);
    else
    printf("-1");
}