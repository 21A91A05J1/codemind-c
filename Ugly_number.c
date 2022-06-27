#include<stdio.h>
int main()
{
    long long int n,f=0,c=0;
    scanf("%lld",&n);
    while(n!=1)
    {
        f=0;
        if(n%2==0)
        {
            n=n/2;
        }
        else if(n%3==0)
        {
            n=n/3;
        }
        else if(n%5==0)
        {
            n=n/5;
        }
        else
        {
            printf("Not Ugly Number");
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("Ugly Number");
    }
}