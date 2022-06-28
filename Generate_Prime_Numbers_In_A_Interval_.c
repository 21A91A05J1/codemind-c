#include<stdio.h>
int fun(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
    for(i=2;i<n;i++)
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
    int n,i,m;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(fun(i))
        {
            printf("%d
",i);
        }
    }
}