#include<stdio.h>
int main()
{
    int n,i,j,a[100],min=999999,p,q,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d%d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]<p || a[i]>q)
        {
            if(min>a[i])  min=a[i];
            f=1;
        }
    }
    if(f==1)
    printf("%d",min);
    else
    printf("-1");
}