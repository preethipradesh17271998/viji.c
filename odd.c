#include<stdio.h>
#include<conio.h>
int main()
{
int i,f,l;
printf("enter first interval");
scanf("%d",&f);
printf("enter second interval");
scanf("%d",&l);
for(i=f;i<=l;i++)
{
if(i%2==1)
{
printf("the given number is odd",i);
}
}
return 0;
}
