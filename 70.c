#include<stdio.h>
void main()
{
    int i,n,c=0,p=1;
    printf("enter the number ");
    scanf("%d",&n);
    while(n!=1)
    {
        n=n/2;
        c++;
    }
    for(i=0;i<c+1;i++)
    {
        p=p*2;
    }
    printf("the nearest number is %d",p);
}
