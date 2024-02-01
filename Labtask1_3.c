#include<stdio.h>
#include<string.h>
int main()
{
//Write a C program to reverse a string using pointers
    char a[100],x,*ptr;
    ptr=a;
    printf("Enter the string:");
    scanf("%s",&a);
    int n=strlen(a);
    for(int i=0;i<n/2;i++)
    {
        x=a[n-i-1];
        a[n-i-1]=a[i];
        a[i]=x; 
    }
    printf("Reverse of the string : %s",ptr);
}
