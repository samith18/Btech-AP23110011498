#include<stdio.h>
int main()
{
  //Write a program in C to find the sum of all elements of the array
	int n,I,sum=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("elements of an array:");
	for(i=0;i<n;i++)
	{
	scanf("%d"&,arr[i]);
		sum=sum+arr[i];
			
	}
	printf("sum=%d",sum);
	return 0;
}
