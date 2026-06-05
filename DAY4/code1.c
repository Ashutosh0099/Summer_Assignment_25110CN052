#include <stdio.h>
#include <math.h>

int main()
{
    int n, n1;
    int count = 0, sum = 0, rem;

    printf("enter number : ");
    scanf("%d", &n);
    n1 = n;

    while (n1 > 0)
    {
        count++;
        n1 = n1 / 10;
    }
    printf("number of digits : %d\n", count);

    n1 = n;

    while (n1 > 0)
    {
        rem = n1 % 10;
        sum = sum + pow(rem, count);
        n1 = n1 / 10;
    }

    printf("sum of digits to power of digits count of a number : %d\n", sum);

    if (sum == n)
    {
        printf("the number is armstrong\n");
    }
    else
    {
        printf("the number is not armstrong\n");
    }

    return 0;
}