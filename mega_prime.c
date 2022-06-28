#include<stdio.h>
#include<math.h>
int fun(int n)
{
    int i,c=0;
    if(n==1 || n==0)
    {
        return 0;
    }
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    long long int n,i,c=0,p=0,di=0,d,f=0;
    scanf("%lld",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
        }
        if(c>0)
        {
            printf("Not Mega Prime");
            f=1;
            break;
        }
    }
    if(c==0)
    {
        while(n>0)
        {
            d=n%10;
            if(fun(d))
            {
                p++;
            }
            else
            {
                printf("Not Mega Prime");
                f=1;
                break;
            }
            di++;
            n=n/10;
        }
    }
    if(f==0)
    {
        if(di==p)
        {
            printf("Mega Prime");
        }
        else if(di!=p)
        {
            printf("Not Mega Prime");
        }
    }
}