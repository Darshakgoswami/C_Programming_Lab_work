// #include<stdio.h>
// int linearsearch(int arr[], int size,int element)
// {
//     for(int i=0; i<size; i++)
//     {
//         if (arr[i]==element)
//         {
//             return i;
//         }   
//     }
//     return -1;
// }
// void main()
// {
//     int arr[]={34,32,21,44,55};
//     int size=sizeof(arr)/sizeof(arr[0]);                           
//     int element=32;
//     int i=linearsearch(arr,size,element);
//     if (i!=1)
//     {
//         printf("element found at index %d",i);
//     }
//     else
//     {
//         printf("element not found in index");
//     }
// }


// #include <stdio.h>
// int main() {
//     int arr[100], even[100], odd[100];
//     int n, i, evenCount = 0, oddCount = 0;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     printf("Enter %d integers:\n", n);
//     for(i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//         if(arr[i] % 2 == 0)
//         {
//             even[evenCount++] = arr[i];
//         } 
//         else
//         {
//             odd[oddCount++] = arr[i];
//         }
//     }
//     printf("\nEven Numbers: ");
//     for(i = 0; i < evenCount; i++)
//     {
//         printf("%d ", even[i]);
//     }
//     printf("\nOdd Numbers: ");
//     for(i = 0; i < oddCount; i++)
//     {
//         printf("%d ", odd[i]);
//     }
//     return 0;
// }
    

#include<stdio.h>
int main()
{
    int arr1[5]={10,20,30,40,50};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("arr2 values are : ");
    for(int i=0;i<5;i++)
    {
        printf("\n%d",arr2[i]);
    }
    return 0;
}                                                         