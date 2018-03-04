#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the values ");
    scanf("%d%d%d",&a,&b,&c);
    d=a*b;
    printf("%d",(d%c));
}
