#include <stdio.h>

int main()
{
    int n, i;
    int t1, t2, temp;

    printf("enter number : ");
    scanf("%d", &n);

    t1 = 0;
    t2 = 1;

    for (i = 1; i <= n; i++)
    {
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
        printf("%d\n", temp);
    }
    return 0;
}
