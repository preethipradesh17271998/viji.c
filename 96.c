#include<stdio.h>
void main()
{
    int a,i,c=0;
    printf("enter the number ");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c>=1)
    {
        printf("composite");
    }
    else
    {
        printf("not a composite");
    }
}
