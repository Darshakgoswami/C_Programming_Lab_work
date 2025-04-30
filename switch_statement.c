#include<stdio.h>
void main()
{
    int a=100, b=50;
    char c='%';
    switch (c)
    {
    case '+':
        printf("addition is %d",(a+b));
        break;

    case '-':
        printf("substraction is %d",(a-b));
        break;
    
    default:
        printf("invalid");
        break;
    }
}