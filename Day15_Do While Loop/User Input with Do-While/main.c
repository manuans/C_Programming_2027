#include <stdio.h>

int main()
{
    int i;

    printf("Enter starting number: ");
    scanf("%d", &i);

    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i <= 5);

    return 0;
}
