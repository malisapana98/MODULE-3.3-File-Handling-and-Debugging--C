//WAP to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice 
#include<stdio.h>
#define max_size 100
int main()
{
	int arr[max_size];
	int size;
	int i,j,temp;
	printf("enter size of array:");
	scanf("%d",&size);
	printf("enter element in array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("element of array in ascending order:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}

