#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int c=0,i,x,f=0;
    scanf("%[^
]",ch);
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        for(int j=97 ;j<=122;j++)
        {
            if(x==j) c++;
        }
    }
    printf("%d",c);
}