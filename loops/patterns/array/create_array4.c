#include <stdio.h>
int main()
{
    int size;
    int arr[size];
    char arr1[size];
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("\nEnter IDs:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEntered IDs:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\nEnter Names:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%s", arr1[i]);
    }
    printf("\nEntered Names:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", arr1[i]);
    }
    return 0;
}