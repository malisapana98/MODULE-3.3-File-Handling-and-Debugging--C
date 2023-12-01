// WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
int main()
{
	char str[20];
	int i,len,flag;
	
	printf("enter string\n");
	scanf("%s",&str);
	
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
		   flag=1;	
		}
		if(flag)
		{
			printf("%s is not a palindrom\n",str);
		}
		else
		{
			printf("%s is a palindrom\n",str);
		}
		
	}
	
}
