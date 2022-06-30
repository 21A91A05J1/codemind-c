#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {   
        if(i%2==0){
        if(a[i+1]>=1){
        while(a[i+1]>0)
        {
            printf("%d ",a[i]);
            a[i+1]--;
        }
       } }
    }
}