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
        for(int j=33 ;j<=47;j++)
        {
            if(x==j) {  c++; break; }
        }
        for(int j=58 ;j<=64;j++)
        {
            if(x==j) { c++;  break; }
        }
         for(int j=91 ;j<=96;j++)
        {
            if(x==j) { c++;  break; }
        }
        for(int j=123 ;j<=126;j++)
        {
            if(x==j) { c++;  break; }
        }
    }
    printf("%d",c);
}