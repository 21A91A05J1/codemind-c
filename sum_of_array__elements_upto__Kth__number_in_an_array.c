#include<stdio.h>
int main()
{
    int n,i,j,c=0,s=0,x,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        m=i;
    }
    
    for(int k=0;k<=m;k++)
    {
        
        {
            s+=a[k];
        }
    }
    printf("%d",s);
}