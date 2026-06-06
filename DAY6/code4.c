#include <stdio.h>
int main()
{
    int x;
    printf("enter the value of x : ");
    scanf("%d", &x);

    int n;
    printf("enter the power of x : ");
    scanf("%d", &n);

    int res = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        res = res * x;
    }

    printf("the value of %d^%d is : %d\n", x, n, res);
    return 0;
}