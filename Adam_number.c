#include<stdio.h>
int main()
{
    int n,s=0,d,x,y,a,t=0,b;
    scanf("%d",&n);
    x=n*n;
    while(n>0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    y=s*s;
    while(y>0)
    {
        b=y%10;
        t=t*10+b;
        y=y/10;
    }
    if(x==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}