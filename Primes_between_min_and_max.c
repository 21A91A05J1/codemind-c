#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i=0;
    if(n<2) return 0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,i,a[100],p,q,max=0,min=99999,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>max) { max=a[i]; p=i; }
        if(a[i]<min) { min=a[i]; q=i;  }
    }
   if(p<q){ int t=p; p=q; q=t;  }
    for(i=q;i<=p;i++)
    {
        if(prime(a[i]))
        c++;
    }
    printf("%d",c);
}