#include <stdio.h>

int main()
{
    int n, i, j, k, l;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (k = i; k <= n; k++)
        {
            printf("*");
        }
        for (l = n - 1; l >= i; l--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}