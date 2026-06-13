#include <stdio.h>
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x, y;
    printf("enter the value of  x and y : ");
    scanf("%d %d", &x, &y);
    printf(" the sum of %d and %d is %d", x, y, sum(x, y));
    return 0;
}