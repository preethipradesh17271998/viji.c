#include<stdio.h>
int main()
{
	int l,b,h,v,s;
	printf("enter the l b h");
	scanf("%d %d %d",&l,&b,&h);
	v=l*b*h;
	printf("the volume is %d",v);
	s=(2*l*b)+(2*b*h)+(2*h*l);
	printf("surface area is %d",s);
	return 0;
}
