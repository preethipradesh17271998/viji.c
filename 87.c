#include<stdio.h>
int main()
{
	int c,d,gcd,i;
	scanf("%d%d",&c,&d);
	for(i=1;i<=c&&i<=d;++i)
	{
		if(c%i==0&&d%i==0)
		{
			gcd=i;
		}
	}
	printf("the gcd is %d",gcd);
	return 0;
}
