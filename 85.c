#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	int i,l;
	printf("enter the string ");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(i%2==0)
		{
			printf("%c",s[i]);
		}
	}
	printf("\t");
	for(i=0;i<l;i++)
	{
		if(i%2!=0)
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
