#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int x=0,y=1;
    printf("%d ",x);
    int i=0;
    while(i<(n-1))
    {
        temp=x;
        x=x+y;
        printf("%d ",x);
        y=temp;
        i++;
    }
}