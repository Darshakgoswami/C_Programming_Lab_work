#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    int num;
    fptr=fopen("C:\\file_handling\\test.txt","w");
    printf("enter num");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
}