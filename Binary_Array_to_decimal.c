#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0,j=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=(n-1);i>=0;i--)
    {
        if(a[i]==1)
        {
            c=c+pow(2,j);
        }
        j++;
    }
    printf("%d",c);
}