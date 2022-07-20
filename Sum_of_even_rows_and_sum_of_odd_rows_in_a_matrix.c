#include<stdio.h>
int main()
{
    int r,c,a[100][100],i,j,s=0,d=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i%2==0)
            s+=a[i][j];
            else
            d+=a[i][j];
        }
    }
    printf("%d %d",s,d);
}