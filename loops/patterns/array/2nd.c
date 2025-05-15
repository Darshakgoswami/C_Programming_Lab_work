#include<stdio.h>
void main()
{
    int a,b,i,j,sum=0;
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    int arr[a][b];
    printf("enter elements of array :");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("\nelements is [%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }        
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("addition is %d",sum);
}