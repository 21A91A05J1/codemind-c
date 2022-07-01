#include<stdio.h>
int main()
{
    int n,a[100],i,d,c=0,f=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {    t=a[i];
        c=0;
        while(a[i]>0)
        {
            d=a[i]%10;
            c=c*10+d;
            a[i]=a[i]/10;
        }
        if(c==t)   f++;
        
    }
    printf("%d ",f);
    
}