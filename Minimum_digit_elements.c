#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,min=99999,x,c=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        x=log10(a[i])+1;
        if(x==min) { c++; }
        if(x<min) { min=x; c=1; }
        
    }
    printf("%d",c);
}