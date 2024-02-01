#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,*row,*column,*arr;
    row=&r;
    column=&c;
    printf("Enter number of rows and columns : \n");
    scanf("%d%d",&r,&c);
    arr=(int*)malloc(r*c*sizeof(int));
    printf("Enter the values : \n");
    for(int i=0;i<(*row);i++)
    {
        for(int j=0;j<(*column);j++)
        {
            scanf("%d",&arr[i*(*column)+j]);
        }
    }
    printf("2D matrix\n");
    for(int i=0;i<(*row);i++)
    {
        for(int j=0;j<(*column);j++)
        {
            printf("%d ",arr[i*(*column)+j]);
        }
        printf("\n");
    }
}
