#include<stdio.h>
int main()
{
    int n,i,m,f=0,avr,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    avr=s/n;
    for(i=0;i<n;i++)
    {
        if(avr==a[i])
        {
            printf("True");
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("False");
    }
}