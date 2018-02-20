#include<stdio.h>
void main()
{
    int i,c=0;
    char s[20]="hello";
    for(i=0;i<=20;i++)
    {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        c=1;
    }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
