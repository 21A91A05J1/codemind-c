#include<stdio.h>
int main()
{
    int n,i,j,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]%2==1)
        {
            c++;
            if(j%2==1)
            {
                s++;
            }
        }
    }
    if(c==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}