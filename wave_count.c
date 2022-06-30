#include<stdio.h>
int main()
{
    int n,i,m,j=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-2;i++)
    {   
        if(a[i]<a[i+1] && a[i+1]>a[i+2]) { i++; c++; }
        else { printf("-1");  c=0; break;  }
    }
    if(c!=0)
    printf("%d",c);
}