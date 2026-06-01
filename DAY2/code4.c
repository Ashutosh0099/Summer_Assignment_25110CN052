#include <stdio.h>

int main()
{
    int n;
    int N = 0;
    int rem;
    int i;

    printf("enter the value of n : ");
    scanf("%d", &n);
    i = n;

    while (n != 0)
    {
        rem = n % 10;
        N = N * 10 + rem;
        n = n / 10;
    }
    printf("the reverse of a given number is %d\n", N);

    if (N == i)
    {
        printf("the given number is a palindrome\n");
    }
    else
    {
        printf("the given number is not a palindrome\n");
    }
    return 0;
}