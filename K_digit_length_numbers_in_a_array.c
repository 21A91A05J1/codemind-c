#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,c=0,x,f=0,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)  c=1;
        else if(a[i]<0) 
        {
            x=abs(a[i]);
            
            c=log10(x)+1; 
        }
        else
        {
        c=abs(a[i]);
        c=log10(a[i])+1; }
        if(c==k)  f++;
        
    }
    printf("%d ",f);
}