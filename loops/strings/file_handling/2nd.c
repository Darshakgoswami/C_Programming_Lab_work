#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    int num;
    if ((fptr=fopen("C:\\file_handling\\test.txt","r"))==NULL)
    {
        printf("it's a null file");
        exit(1);
    }
    fscanf(fptr,"%d",&num);
    printf("value of num = %d",num);
    fclose(fptr);
