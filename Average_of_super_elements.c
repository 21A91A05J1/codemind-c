#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,f=0,s=0,p=0;
    float ar;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j] && i!=j)
                {
                    c++;
                    a[j]=-1;
                }
            }
            if(a[i]==c)
            {
                s+=a[i];
                p++;
                f=1;
            }
        }
    }
    ar=(float)s/p;
    if(f==0)
    {
        printf("-1");
    }
    else
    {
        printf("%.2f",ar);
    }
}