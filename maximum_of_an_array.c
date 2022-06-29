#include<stdio.h>
int main()
{
    long long int n,i,s;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>s)
        {
            s=a[i];
        }
    }
    printf("%lld",s);
}