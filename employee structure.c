 //Write a program of structure for five employee that provides the 
 //   following information-print and display empno,empname,address and 
 //  age.
#include<stdio.h>
struct employee{
	int empno;
	char empname[30],address[50];
	int age;
}e1;
   int main()
   {
   	struct employee arr[4];
   	 int i;
   	
   		for(i=1;i<=5;i++)
   		{
		   printf("enter employee number\n");
		   scanf("%d",&arr[i].empno);
		   
		   printf("enter employee name:\n");
		   scanf("%s",&arr[i].empname);
		   
		   printf("enter address:\n");
		   scanf("%s",&arr[i].address);
		   
		   printf("enter age of employee:\n");
		   scanf("%d",&arr[i].age);
		   
	   }
	   
	   for(i=1;i<=5;i++)
	   {
	   	printf("Employee number: %d\n",arr[i].empno);
	   	printf("Employee name: %s\n",arr[i].empname);
	   	printf("Address of employee: %s\n",arr[i].address);
	   	printf("Age of employee: %d\n",arr[i].age);
	   }
   }
