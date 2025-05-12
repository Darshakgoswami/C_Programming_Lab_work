#include<stdio.h>
struct student
{
    
    int id;
    double d;
}s1;
struct address
{
    
    char*city;
    struct student stu;
}s2;
void main(){
    s2.stu.id=12;
    s2.stu.d=22.2;
    printf("\n%d",s2.stu.id);
    printf("\n%lf",s2.stu.d);
    s2.city="test";
    printf("\n%s",s2.city);
}