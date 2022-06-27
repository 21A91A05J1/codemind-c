#include<stdio.h>
int div(int n)
{
    int i,s=1;
    for(i=2;i<(n);i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    return s;
}
int main()
{
    int n,m,x,s;
    scanf("%d",&n);
    s=div(n);
    if(s>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}