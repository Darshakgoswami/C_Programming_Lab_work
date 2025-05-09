#include <stdio.h>
struct Date {
    int day, month, year;
};
struct Employee {
    int emp_id;
    char name[50];
    struct Date dob; // Nested Structure
};
int main() {
    struct Employee e = {1001, "Priya", {15, 8, 1990}};
    printf("Employee ID: %d\n", e.emp_id);
    printf("Name: %s\n", e.name);
    printf("DOB: %02d/%02d/%04d\n", e.dob.day, e.dob.month, e.dob.year);
    return 0;
}