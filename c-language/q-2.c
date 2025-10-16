#include <stdio.h>

int main()
{
    int n, count = 0,i;

    printf("Enter an digit : ");
    scanf("%d", &n);

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        for(int i=n; i!=0; i=i/10){
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}