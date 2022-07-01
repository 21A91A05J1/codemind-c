#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int c=0,i,x;
    scanf("%[^
]",ch);
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        if(x!=32) c++;
        if(x==32 || i==(strlen(ch)-1))
        {
             printf("%d ",c);
             c=0;
        }
    }
}