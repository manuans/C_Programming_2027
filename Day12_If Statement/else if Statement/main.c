#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your Marks: ");
    scanf("%d", &marks);

    if(marks >= 60)
    {
        printf("First Division");
    }
    else if(marks >= 33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
