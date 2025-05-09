#include<stdio.h>
void main()
{
    int pin=1234;
    int n;
    while (1)
    {
        printf("enter pin");
        scanf("%d",&n);
        if (pin==n)
        {
            printf("\npin is valid\n");
            break;
        }
        else
        {
            printf("pin is invalid\n");
        }
    }
}