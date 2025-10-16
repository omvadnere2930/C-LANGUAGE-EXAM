#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];
    int *p1, *p2, *p3;

    p1 = a;  
    p2 = b;  
    p3 = sum; 

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (p1 + i));
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (p2 + i));
    }

    // Calculate sum using pointers
    for (int i = 0; i < n; i++)
    {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    printf("\nSum of the two arrays:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p3 + i));
    }

    printf("\n");

    return 0;
}
