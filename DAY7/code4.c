#include <stdio.h>

int reverseHelper(int n, int rev)
{
    if (n == 0)
        return rev;
    return reverseHelper(n / 10, rev * 10 + n % 10);
}

int reverse(int n)
{
    return reverseHelper(n, 0);
}

int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("reverse of the given number is : %d\n", reverse(x));
    return 0;
}
