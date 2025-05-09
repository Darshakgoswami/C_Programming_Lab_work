// #include<stdio.h>
// void function1(int a)
// {
//     printf("the value is : %d",a);
// }
// void main()
// {
//     function1(10);
//     function1(20);
// }

// #include<stdio.h>
// void function2(int x,int y)
// {
//     printf("the value is : %d",x);
//     printf("\nthe value is : %d",y);
// }
// void main()
// {
//     function2(500,700);
// }

// #include <stdio.h>
// void xyz(int n[]) {
//   for (int i = 0; i < 5; i++) {
//     printf("\n%d",n[i]);
//   }
// }

// void main() {
//   int k[5] = {10, 20, 30, 40, 50};  
//   xyz(k);
// }

// #include<stdio.h> 
// void main()
// {
//   int arr[]={10,20,30,40,50,60,70};
//   int size=sizeof(arr)/sizeof(arr[0]);
//   printf("number of elements is : %d",size);
// }

#include<stdio.h>
void main()
{
  int arr[]={10,20,30,40,50};
  int size = sizeof(arr)/sizeof(arr[0]);
  int sum = 0;
  printf("array elements :");
  for(int i=0;i<size;i++)
  {
    printf("\n%d",arr[i]);
    sum=sum+arr[i];
  }
  printf("\nthe sum of array is : %d",sum);
}