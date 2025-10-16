#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 0; i < 5; i++)   
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = 10 - i; k >= 6; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
