#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,d,x,y,t=0;
    scanf("%d",&n);
    y=log10(n)+1;
    s=n;
    while(y)
    {
        d=n%10;
        t=t+pow(d,y);
        y--;
        n=n/10;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}