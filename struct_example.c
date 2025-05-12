#include<stdio.h>
struct employee getinfo();
struct employee
{
    int id;
    char name[20];
    char dep[20];
    double salary;
};
void main()
{
    struct employee s;
    s=getinfo();
    printf("%d\n%s\n%s\n%lf",s.id,s.name,s.dep,s.salary);
}
struct employee getinfo()
{
    struct employee st;
    printf("enter id , name , department , and , salary : ");
    scanf("\n%d\n%s\n%s\n%lf",&st.id,&st.name,&st.dep,&st.salary);
    return st;
}