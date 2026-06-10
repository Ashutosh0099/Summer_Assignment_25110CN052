#include <stdio.h>
int main()
{
    int n, i, j;
    n = 5;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}