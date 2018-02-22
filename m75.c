#include<stdio.h>
#include<string.h>
void main()
{
    char a[30];
    int b,c,l;
    printf("enter the string ");
    scanf("%s",&a);
    l=strlen(a);
    b=l%2;
    c=l/2;
    if(b==0)
    {
        a[c]='*';
        a[c-1]='*';
        printf("%s",a);
    }
    else
    {
        a[c]='*';
        printf("%s",a);
    }
}
