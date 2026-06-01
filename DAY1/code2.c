#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
