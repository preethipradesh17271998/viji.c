#include<stdio.h>
void main()
{
    char str[30];
    int i,c=0;
    scanf("%s",&str[i]);
    for(i=0;str[i]!='\0';i++)
    {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
        c++;
    }
    }
    if(c>=1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
