#include<stdio.h>
void main()
{
    int a,i;
    printf("enter the value ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
        printf("\t%d",i);
    }
    }
}
