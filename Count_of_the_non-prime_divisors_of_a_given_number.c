#include<stdio.h>
int fun(int n)
{
    int i;
    if(n<=1)
    {
        return 1;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(fun(i))
            {
                c++;
            }
        }
    }
    printf("%d",c);
}