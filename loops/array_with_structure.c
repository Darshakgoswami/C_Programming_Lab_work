struct array_with_structure
{
    int id;
    double d;
}s1[5];
#include<stdio.h>
void main()
{
    printf("enter id and double value");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s1[i].id);
        scanf("%lf",&s1[i].d);
    }
    printf("enter elements");
    for(int i=0;i<5;i++)
    {
        printf("\n%d,\n%lf",s1[i].id,s1[i].d);
    }
}