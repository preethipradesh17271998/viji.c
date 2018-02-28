#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	int i,l,j,c=0;
	scanf("%s",&s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
				c++;
			}
		}
	}
	if(c>=1)
	{
		printf("not a isogram");
	}
	else
	{
		printf("isogram");
	}
	return 0;
	
}
