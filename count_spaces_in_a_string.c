#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],i,c=0;
    scanf("%[^
]s",ch);
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}