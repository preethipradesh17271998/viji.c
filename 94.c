#include<stdio.h>
void main()
{
    int a[10],n,k,i;
    printf("enter the input ");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("\t%d",a[i]);
        }
    }
}
