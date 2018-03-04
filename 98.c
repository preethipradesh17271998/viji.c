#include<stdio.h>
void main()
{
    int n,a[10],i;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i!=a[i])
        {
            printf("%d",i);
        }
    }
}
