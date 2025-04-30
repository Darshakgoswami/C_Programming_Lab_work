// #include<stdio.h>
// void main()
// {
//     int size;
//     printf("enter array size");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter elements");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if (arr[i]>arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf("ascending order is : ");
//     for(int i=0;i<size;i++)
//     {
//         printf("\n%d",arr[i]);
//     }
// }


#include<stdio.h>
void main()
{
    int size;
    printf("enter array size");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("descending order is : ");
    for(int i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }
}