#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    char s;
    fptr=fopen("C:\\file_handling\\test3.txt","w");
    printf("enter character value : ");
    scanf("%c",&s);
    fprintf(fptr,"%c",s);
    fclose(fptr);
}