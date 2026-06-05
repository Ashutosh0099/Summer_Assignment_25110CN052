#include <stdio.h>
int main()
{
    int n;
    int i, j;
    printf("enter a number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int count = 1;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d is prime\n", i);
        }
    }
    return 0;
}