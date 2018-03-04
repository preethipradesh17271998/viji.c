#include<stdio.h>
void main()
{
    int n,m=1,rem;
    printf("enter the value ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        m=m*rem;
        n=n/10;
    }
    printf("%d",m);
}
