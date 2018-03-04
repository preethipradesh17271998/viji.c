#include<stdio.h>
void main()
{
    int n,k,a[10],i,sum=0;
    printf("enter the number ");
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++)
    {
        
        sum=sum+i;
    }
    printf("%d",sum);
}
