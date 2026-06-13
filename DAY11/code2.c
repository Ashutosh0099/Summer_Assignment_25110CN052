#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int x, y;
    printf("enter the value of x and y : ");
    scanf("%d %d", &x, &y);
    printf("the maximum number between %d and %d is %d", x, y, max(x, y));
    return 0;
}