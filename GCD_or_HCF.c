#include<stdio.h>
int main()
{
    int n,m,min,i;
    scanf("%d%d",&n,&m);
    min=n;
    if(n>m)
    {
        min=m;
    }
    for(int i=min;i>0;i--)
    {
        if(n%i==0 && m%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}