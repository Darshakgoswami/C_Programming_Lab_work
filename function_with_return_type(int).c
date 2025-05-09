// #include<stdio.h>
// int xyz()
// {
//     return 1;
// }
// void main()
// {
//     int i = xyz();
//     printf("the value is : %d",i);
// }

// #include<stdio.h>
// int xyz(int a)
// {
//     return a;
// }
// void main()
// {
//     int i = xyz(10);
//     printf("the output value is : %d",i);
// }

// #include<stdio.h>
// int xyz(int a, int b)
// {
//     return a+b;
// }
// void main()
// {
//     int i = xyz(50,50);
//     printf("addition is : %d",i);
// }

#include<stdio.h>
int xyz(int a, int b)
{
    return a*b;
}
void main()
{
    int i = xyz(10,50);
    printf("multiplication is : %d",i);
}