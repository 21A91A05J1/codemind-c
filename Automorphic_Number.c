#include<stdio.h>
int main()
{
    int n,d,c,a=0,b=0,i;
    scanf("%d",&n);
    int x;
    x=n*n;
    while(n>0)
    {
        d=n%10;
        c=x%10;
        n=n/10;
        x=x/10;
        if(d==c)
        {
            a++;
        }
        b++;
    }
    if(a==b)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}