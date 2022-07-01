#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,x,c=0;
    scanf("%[^
]",s);
    for(i=0;i<strlen(s);i++)
    {  x=s[i];
       if(x==97 || x==101 || x==105 || x==111 || x==117 || x==65 || x==69 || x==73 || x==79 || x==85) c++;
    }
     printf("%d",c);
}