// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char name[50];
//     printf("enter your name:");
//     scanf("%s",&name);
//     printf("name is : %s",name);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[100];
//     printf("enter your name :");
//     scanf("%s", name);
//     int length = strlen(name);
//     printf("length is : %d ",length);
//     return 0;
// }    

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[100];
//     printf("enter string : ");
//     scanf("%s",name);
//     strrev(name);
//     printf("reverse string is : %s", name);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char x[100],y[100];
//     printf("enter first string : ");
//     scanf("%s",x);
//     printf("enter second string : ");
//     scanf("%s",y);
//     int cmp = strcmp(x,y);
//     if (cmp == 0)
//     {
//         printf("both strings are equal :");
//     }
//     else
//     {
//         printf("not equal");
//     }
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char pin[]="1234";
    char n[10];
    while (1)
    {
        printf("enter pin");
        scanf("%s", n);
        int cmp = strcmp(pin,n);
        if (cmp == 0)
        {
            printf("\npin is valid\n");
            break;
        }
        else
        {
            printf("pin is invalid\n");
        }
    }
    return 0;
}