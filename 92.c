#include<stdio.h>
void main()
{
    int n,a[10],i,s=0;
    printf("enter the input ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
}
