#include<stdio.h>
#include<math.h>
int main()
{
    int r,i,j,a[100][100],b[100][100],c[100][100];
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        scanf("%d",&b[i][j]);
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++){
        c[i][j]=(a[i][j]+b[i][j]);
        if(j!=r-1)
        printf("%d ",c[i][j]); 
        else
            printf("%d",c[i][j]);
        }
        if(i!=r-1)
        printf("
");
    }
}