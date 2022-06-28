#include<stdio.h>
int main()
{
    int arr[20],n,i,s,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        if(s%2==0)
        {
            sum=sum+s;
        }
    }
    printf("%d",sum);
    return 0;
}