#include<stdio.h>
int main()
{
  //Write a program in C to read n number of values in an array and display them in reverse order.
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
              int arr[n];
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
	
	scanf("%d",&arr[i]);
}
	printf("enter the elements in  array :");
	for(i=n-1;i>0;i--)
	{
	
	printf("%d",arr[i]);
}
printf("\n");
     return 0;
}
