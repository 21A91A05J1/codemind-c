#include<stdio.h>
int main()
{
    int n,i,s=0;
    float avr;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    avr=(float)s/n;
    printf("%.2f",avr);
}