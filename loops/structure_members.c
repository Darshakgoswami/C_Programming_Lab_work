#include<stdio.h>
struct structure_members
{
    int id;
    double d;
}s1,s2;
void main()
{
    printf("enter int and double values:");
    scanf("%d",&s1.id);
    scanf("%lf",&s2.d);
    printf("\n%d\n%lf",s1.id,s2.d);
}