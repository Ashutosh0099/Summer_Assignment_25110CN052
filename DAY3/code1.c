#include <stdio.h>
int main()
{
    int n;
    int i, count = 0;

    printf("enter a number : ");
    scanf("%d", &n);

    for (i = 1; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime\n");
    }
}