#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,max=0,x,c=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        x=log10(a[i])+1;
        if(x==max) { c++; }
        if(x>max) { max=x; c=1; }
        
    }
    printf("%d",c);
}