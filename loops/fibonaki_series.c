#include<stdio.h>
void main()
{
    int a=1,b=2;
    for(int i=1;i<=7;i++)
    {
        int c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
}