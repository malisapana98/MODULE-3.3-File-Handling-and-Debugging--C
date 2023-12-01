//WAP Find out length of string without using inbuilt function 
#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf("enter a string\n");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		printf("length of string:%d\n",i);
	}
}
