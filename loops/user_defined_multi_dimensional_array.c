#include<stdio.h>
void main()
{
    int row,column;
    printf("enter row : ");
    scanf("%d",&row);
    printf("enter column : ");
    scanf("%d",&column);
    printf("enter elements : \n");
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nyour output is : \n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n");
    }
}