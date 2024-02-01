#include<stdio.h>
int power_num(int,int,int*);
int main()
{
//Write a C program to calculate the power of a number using pointers to functions.

    int p,b,res;
    printf("Enter base and power : ");
    scanf("%d%d",&b,&p);
    int (*power)(int,int,int*)=&power_num;
    (*power)(b,p,&res);
    printf("%d to the power of %d is %d",b,p,res);

}
int powerofnum(int x,int y,int*ans)
{
    *ans=1;
    for(int i=1;i<=y;i++)
    {
        *ans=(*ans)*x;
    }
}
