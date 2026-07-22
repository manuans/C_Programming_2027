#include <stdio.h>

int main()
{
    int id;
    int age;
    int salary;

    printf("Enter Id: ");
    scanf("%d", &id);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Salary: ");
    scanf("%d", &salary);

    printf("\n----- Employee Salary -----\n");
    printf("Id = %d\n", id);
    printf("Age = %d\n", age);
    printf("Salary = %d\n", salary);

    return 0;
}
