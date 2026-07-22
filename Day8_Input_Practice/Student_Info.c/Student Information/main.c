#include <stdio.h>

int main()
{
    int roll;
    int age;
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n----- Student Details -----\n");
    printf("Roll Number = %d\n", roll);
    printf("Age = %d\n", age);
    printf("Marks = %.2f\n", marks);

    return 0;
}
