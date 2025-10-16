#include <stdio.h>

int main()
{
    int num, firstdigit, lastdigit, sum;

    printf("Enter an number :");
    scanf("%d", &num);

    lastdigit = num % 10;

    firstdigit = num;

    for (int i = num; i >= 10; i = i / 10)
    {
        firstdigit = i / 10;
    }

    sum = firstdigit+lastdigit;

    printf("The sum of the first and last digit is: %d\n", sum);

    return 0;
}