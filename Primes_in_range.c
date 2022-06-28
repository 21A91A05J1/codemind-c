#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    else
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int m,n,i,c=0;
    scanf("%d%d",&m,&n);
    for (i=m;i<=n;i++)
    {
        if(prime(i))
        {
            c++;
        }
    }
    printf("%d",c);
    
}