#include<stdio.h>
struct structure
{
    int a;
    double b;
};
void main()
{
    struct structure x;
    x.a=100;
    x.b=50.152;
    printf("a is %d ",x.a);
    printf("\nb is %lf ",x.b);
}