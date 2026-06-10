#include <stdio.h>
int SOD(int n)
{
    if (n == 0)
        return 0;

    else
        return n % 10 + SOD(n / 10);
}

int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("sum of digits of a given number is : %d\n", SOD(x));
    return 0;
}
