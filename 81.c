#include<stdio.h>
void main()
{
    int i,k,o,n;
    printf("enter the input ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the ninja's of kabali ");
        scanf("%d",&k);
        printf("\nenter the opponent ninja's ");
        scanf("%d",&o);
        if(k>o)
        {
            printf("\ndifference is%d",(k-o));
        }
        else
        {
            printf("\ndifference is%d",(o-k));
        }
    }
}
