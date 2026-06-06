#include <stdio.h>
int main()
{
    int i, n;
    int sum = 0;

    printf("enter the value of n : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("enter a positive integer");
        return 0;
    }

    else
    {
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum = sum + i;
            }
        }
    }

    printf("sum of divisors of %d is %d\n", n, sum);

    if (sum == n)
    {
        printf("%d is a perfect number\n", n);
    }
    else
    {
        printf("%d is not a perfect number\n", n);
    }
    return 0;
}