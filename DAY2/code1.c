#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int rem;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("sum of the digits of a given number is %d\n", sum);
    return 0;
}