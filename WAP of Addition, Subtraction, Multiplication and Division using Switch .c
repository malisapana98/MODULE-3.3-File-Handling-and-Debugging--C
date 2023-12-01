//WAP of Addition, Subtraction, Multiplication and Division using Switch
#include<stdio.h>
int main()
{
	int a,b,choice,total;
	printf("************Calculator*************\n");
	printf("1.ADDITION\n");
	printf("2.SUBSTRACTION\n");
	printf("3.MULTIPLICATION\n");
	printf("4.DIVISION\n");
	printf("5.MODULE\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter two numbers:\n");
		       scanf("%d%d",&a,&b);
		       total=a+b;
		       printf("your total is %d",total);
		break; 
		
		case 2:printf("enter two numbers:\n");
		       scanf("%d%d",&a,&b);
		       total=a-b;
		       printf("your total is %d",total);
		break;       
		
		case 3:printf("enter two numbers:\n");
		       scanf("%d%d",&a,&b);
		       total=a*b;
		       printf("your total is %d",total);
		break;       
		
		case 4:printf("enter two numbers:\n");
		       scanf("%d%d",&a,&b);
		       total=a/b;
		       printf("your total is %d",total);
		break;       
		
		case 5:printf("enter two numbers:\n");
		       scanf("%d%d",&a,&b);
		       total=a%b;
		       printf("your total is %d",total);
		break;             
	}
}
