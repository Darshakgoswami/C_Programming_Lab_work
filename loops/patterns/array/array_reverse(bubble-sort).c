#include<stdio.h>
void main()
{
    int size;
    printf("enter array size");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=size-1;i>=0;i--)
    {
        printf("\n%d",arr[i]);
    }
}