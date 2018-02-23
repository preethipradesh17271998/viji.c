#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value ");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("\nthe product is %d",c);
    if(c/a==a)
    {
        printf("\nperfect square");
    }
    else
    {
        printf("\nnot a perfect square");
    }
    
}
