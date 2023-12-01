  //WAP to show difference between Structure and Union.
  
#include<stdio.h>
union person{
	int age;
	double salary;
}p1;

int main()
   {
    	union person p1 ;
   	
      printf("enter age of person:\n");
		   scanf("%d",&p1.age);
		   
		   printf("enter salary of person:\n");
		   scanf("%lf",&p1.salary);
		   
	     printf("Age of person is:%d\n",p1.age);
	     printf("Salary of person is %lf\n",p1.salary);
   }
