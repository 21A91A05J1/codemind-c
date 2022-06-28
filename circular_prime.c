#include<stdio.h>
int is_prime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        s=s*10+(n%10);
        n/=10;
    }
    if(is_prime(t)==1 && is_prime(s)==1)
    {
        printf("circular prime");
    }
    else if(is_prime(t)==1 && is_prime(s)==0)
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}