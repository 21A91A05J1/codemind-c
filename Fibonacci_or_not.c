#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int x=0,y=1;
    while(n>0)
    {
        temp=x;
        x=x+y;
        if(x==n)
        {
            printf("True");
            break;
        }
        if(x>n)
        {
            printf("False");
            break;
        }
        y=temp;
    }
}