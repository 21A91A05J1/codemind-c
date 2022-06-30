#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if(n<2) return 0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)  return 0;
    }
    return 1;
}
int main()
{
    int n,a[100],i,k,c=0,x;
    float avr;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        x=a[i];
        if(a[i]<=k)
        {
        if(prime(x))
        {
            c++;
        }
        }
    }
    printf("%d",c);
}