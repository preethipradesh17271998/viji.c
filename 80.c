#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("enter the value ");
    scanf("%d",&n);
    printf("enter the numbers ");
    for(i==0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("\t%d",a[i]);
        }
    }
}
