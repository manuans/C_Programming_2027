#include <stdio.h>

int main()
{
    float length, width;

    printf("Enter Length: ");
    scanf("%f", &length);

    printf("Enter Width: ");
    scanf("%f", &width);

    printf("Area = %.2f", length * width);

    return 0;
}
