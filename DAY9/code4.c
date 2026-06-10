#include <stdio.h>
int main()
{
    int n, i, j;
    n = 5;

    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == 5)
        {
            for (j = 1; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == 5)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}