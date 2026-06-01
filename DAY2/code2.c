#include <stdio.h>

int main()
{
    int n;
    int N = 0;
    int rem;

    printf("enter the value of n : ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        N = N * 10 + rem;
        n = n / 10;
    }
    printf("the reverse of a given number is %d\n", N);
    return 0;
}