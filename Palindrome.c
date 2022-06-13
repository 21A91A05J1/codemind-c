#include<stdio.h>
int main()
{
    int n,r,s=0,t;
    scanf("%d",&n);
    t=n;
    while(t)
    {
        r=t%10;
        s=(s*10)+r;
        t=t/10;
    }
    if(n==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}