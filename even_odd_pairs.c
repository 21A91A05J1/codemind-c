#include<stdio.h>
int main()
{
    int n,i,j,a[100],f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && f==0 && a[i]!=-1)
        {
            printf("%d ",a[i]);
            f=1;
            a[i]=-1;
            i=0;
        }
        if(a[i]%2==1 && f==1 && a[i]!=-1)
        {
            printf("%d ",a[i]);
            a[i]=-1;
            f=0;
            i=0;
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        printf("%d ",a[i]);
    }
    if(n%2==1)
    printf("0");
}