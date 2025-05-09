#include<stdio.h>
void main()
{
    int n[3][3]={{10,20,30},{50,70,90},{50,90,60}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",n[i][j]);
        }
    }
}