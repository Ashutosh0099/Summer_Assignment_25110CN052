#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1)
        return 0;

    else if (n == 2)
        return 1;

    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int x;
    printf("enter term : ");
    scanf("%d", &x);
    printf("%d term of fibonacci series is : %d\n", x, fibonacci(x));
    return 0;
}