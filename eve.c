#include<stdio.h>
#include<conio.h>
int main()
{
int f,i,l;
printf("enter the first inteerval");
scanf("%d",&f);
printf("enter second interval"):
scanf("%d",&l);
for(i=f;i<=l;i++)
{
if(i%2==0)
{
printf("the given number is even",i);
}
}
return 0;
}
