#include<stdio.h>
int main()
{
	int a,b,c,i,count=0;
	printf("enter the value ");
	scanf("%d%d",&a,&b);
	c=a*b;
	for(i=1;i<=c;i++)
	{
		if(c==i*i)
		{
			count++;
		}
	}
	if(count>=1)
	{
		printf("perfect square");
	}
	else
	{
		printf("not a perfect square");
	}
	return 0;
}
