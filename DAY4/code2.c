#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;

    printf("enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int n1, sum = 0, count = 0, rem;
        n1 = i;

        while (n1 > 0)
        {
            count++;
            n1 = n1 / 10;
        }

        n1 = i;

        while (n1 > 0)
        {
            rem = n1 % 10;
            sum = sum + pow(rem, count);
            n1 = n1 / 10;
        }

        if (sum == i)
        {
            printf("%d\t", i);
        }
    }
}