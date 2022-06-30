#include<stdio.h>
int main()
{
    int n,i,m,j=0;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;j++)
    {   
        if(a[i]==a[j] && i!=j)
        {  a[j]=-1;  }
        if(j==n-1)  { i++; j=0; }
    }
    for(i=0;i<m;j++)
    {   
        if(b[i]==b[j] && i!=j)
        {    b[j]=-1;  }
        if(j==n-1)  { i++; j=0; }
    }
    for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
        { if(a[j]==b[i])
            {
                a[j]=-1;
                b[i]=-1;
            }  } }
    for(i=0;i<n;i++)
        if(a[i]!=-1)  printf("%d ",a[i]);
    for(i=0;i<m;i++)  
        if(b[i]!=-1)  printf("%d ",b[i]);
}