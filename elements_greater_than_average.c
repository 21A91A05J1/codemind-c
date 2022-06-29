#include<stdio.h>
int main()
{
    int n,i,s=0,avr,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    avr=s/n;
    for(i=0;i<n;i++)
    {
        if(avr<=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}