#include<stdio.h>
void main()
{
    int a;
    char b;
    printf("enter value 1\n",a);
    scanf("%d",&a);
    printf("enter character value",b);
    b=getchar();
    scanf("%c",&b);
    printf("your value is : %d", a);
    printf("\nyour value is : %c",b);
}