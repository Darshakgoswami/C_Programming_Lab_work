#include <stdio.h>
int main() {
    int num, i;
    printf("Enter num");
    scanf("%d", &num);
    printf("Factors of %d is ", num);
    for (i = 1; i <= num; ++i) {
        if (num%i == 0) {
            printf("%d ", i);
        }
    }
}