#include<stdio.h>
void main(){
    int i=0;
    int*ptr;
     ptr=&i;   // pointer hold val of int ival
    printf("\naddress of i is %p",*ptr); //pointer variable  address
    printf("\naddress of int i %p",&i);  // int variable address
    printf("\nval of pointer var %d",*ptr); // variable address
}


#include<stdio.h>
struct pointer_structure
{
    /* data */
    int id;
    char*name;
};
void main(){
    struct pointer_structure st={1,"java"};
    struct pointer_structure *st1;
    st1=&st;
    printf("\nid val is %d",st1->id);
    printf("\nname val is %s",st1->name);
}


#include <stdio.h>
void main(){
    int arr[]={1,2,3,4,5};
    int*ptr;
    ptr=arr;
    for(int i=0;i<5;i++){
         //printf("\n%d",ptr[i]); // array resp
         //printf("\n%d",*(ptr+i)); //airthmetic rep
         printf("\n%p",ptr[i]);
    }
    printf("\nfind address of arr%p",&ptr[0]);

}


#include<stdio.h>
int addition(int *a, int *b)
{
    int sum = *a+*b;
    return sum;
}
void main()
{
    int a=100,b=200;
    int ans=addition(&a,&b);
    printf("%d",ans);
}


#include<stdio.h>
int mul(int *a, int *b)
{
    int mult = *a**b;
    return mult;
}
void main()
{
    int a=10,b=20;
    int ans=mul(&a,&b);
    printf("%d",ans);
}


#include <stdio.h>
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main() 
{
    int x = 10, y = 20;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}


#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc(n* sizeof(int));
    printf("enter array elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%d",ptr[i]);
    }
    free(ptr);
}