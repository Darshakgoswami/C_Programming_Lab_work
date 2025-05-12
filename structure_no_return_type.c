#include<stdio.h>
struct Student 
{
    int id;
};
void display(struct Student s1);
void main()
{
    struct Student s1;
    s1.id=12;
    display(s1);
}
void display(struct Student s1)
{
    printf("%d",s1.id);
}