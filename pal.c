#include<stdio.h>
#include<conio.h>
int main()
{
int n,rem,rev=0,t;
{
printf("enter the number");
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(t==rev)
{
printf("%d is palindrome"\n);
}
else
{
printf("%d is not palindrome",n);
}
return 0;
}
