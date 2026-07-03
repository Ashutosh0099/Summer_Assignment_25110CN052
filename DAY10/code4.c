#include <stdio.h>
int main()
{
    int n, i, j, k, l;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        for (k = 1; (k <= i); k++)
        {
            printf("%c", 'A' + k - 1);
        }

        for (l = i - 1; l >= 1; l--)
        {
            printf("%c", 'A' + l - 1);
        }
        printf("\n");
    }
    return 0;
}