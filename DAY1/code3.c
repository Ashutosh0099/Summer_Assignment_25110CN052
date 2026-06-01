#include <stdio.h>
int main()
{

    int n;
    int product = 1;
    int i;

    printf("enter the value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        product = product * i;
    }

    printf("the factorial of %d is %d\n", n, product);
    return 0;
}