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
    int n,a[100],i,s=0,k=0,x;
    float avr;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        x=a[i];
        if(prime(x))
        {
            s+=a[i];
            k++;
        }
    }
    avr=(float)s/k;
    printf("%.2f",avr);
}