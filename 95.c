#include<stdio.h>
void main()
{
    float p,n,r,si;
    printf("enter the values of p n r: ");
    scanf("%f%f%f",&p,&n,&r);
    si=(p*n*r)/100;
    printf("simple interest is %.2f",si);
}
