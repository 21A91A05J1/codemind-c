#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,x,m,j;
    scanf("%[^
]",s);
    m=strlen(s);
    for(i=strlen(s)-1;i>=0;i--)
    {  x=s[i];
        if(x==32 )
        {
            for(j=i+1;j<m;j++) {
            printf("%c",s[j]);   }
             m=i;
            printf(" ");
        }
        if(i==0)
        {
            for(j=0;j<m;j++)
            printf("%c",s[j]);
        }
    }
}