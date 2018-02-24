#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value ");
    scanf("%d%d",&a,&b);
    c=a*b;
    if(c/a==a)
    {
        printf("\n perfect square");
    }
    else
    {
        printf("\nnot a perfect square");
    }
    
}
