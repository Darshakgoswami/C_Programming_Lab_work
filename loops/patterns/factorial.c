#include<stdio.h>
void main()
{
    int fact=1,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}