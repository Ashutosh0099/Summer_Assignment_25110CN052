#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    else
        return n * fact(n - 1);
}

int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("factorial of a given  nymber is : %d\n", fact(x));
    return 0;
}