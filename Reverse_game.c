#include<stdio.h>
int main()
{
    int n,a[100],i,d,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        while(a[i]>0)
        {
            d=a[i]%10;
            c=c*10+d;
            a[i]=a[i]/10;
        }
        printf("%d ",c);
    }
    
}