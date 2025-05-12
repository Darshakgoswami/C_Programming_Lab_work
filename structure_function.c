#include<stdio.h>
struct Student getinfo();
struct Student
{
    int id;
    char name[20];
};
void main()
{
    struct Student s;
    s=getinfo();
    printf("%d\n%s",s.id,s.name);
}
struct Student getinfo()
{
    struct Student st;
    printf("enter id and name : ");
    scanf("\n%d \n%s",&st.id,&st.name);
    return st;
}