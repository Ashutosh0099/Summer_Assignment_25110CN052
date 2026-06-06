#include <stdio.h>

int main()
{
    int n;
    int t1, t2, temp;
    int i;

    printf("enter the value of n : ");
    scanf("%d", &n);

    t1 = 0;
    t2 = 1;

    if (n == 1)
    {
        printf("%d term is %d\n", n, t1);
        return 0;
    }
    else if (n == 2)
    {
        printf("%d term is %d\n", n, t2);
        return 0;
    }

    for (i = 3; i <= n; i++)
    {

        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }

    printf("%d term of fibonacci series is %d\n", n, temp);
    return 0;
}
