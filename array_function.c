#include<stdio.h>
void display(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void main()
{
    int ar[]={10,20,30,80,900};
    display(ar);
}