#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,j,f=0,m;
    scanf("%s",a);
    m=strlen(a);
    for(i=0,j=m-1;i<m/2;i++,j--)
        {
            if(a[i]!=a[j])
            {
                f=1;
                printf("not a palindrome");
                break;
            }
        }
        if(f==0)
        {
            printf(" palindrome");
        }
        return 0;
}
