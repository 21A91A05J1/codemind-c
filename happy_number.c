#include<stdio.h>
int sum(int);
int sum(int a)
{
    int s=0;
    while(a>0)
    {
        s+=((a%10)*(a%10));
        a/=10;
    }
    return s;
}
int main()
{
    int n,k=0;
    scanf("%d",&n);
    if(n<10)
    {
        n=n*n;
    }
    while(n>=10)
    {
        k=sum(n);
        n=k;
    }
    if(k==1 || k==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}






