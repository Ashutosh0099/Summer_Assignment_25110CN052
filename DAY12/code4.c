#include <stdio.h>

int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n, sum;
    printf("enter the value of n : ");
    scanf("%d", &n);
    sum = perfect(n);
    if (sum == n)
    {
        printf("%d is a perfect number \n", n);
    }
    else
    {
        printf("%d is not a perfect number \n", n);
    }
    return 0;
}