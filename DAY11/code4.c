#include <stdio.h>
/*int fact(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
        return a * fact(a - 1);
}*/
int fact(int n);
int main()
{
    int n;
    printf("enter the value of x : ");
    scanf("%d", &n);
    printf("factorial of %d is %d\n", n, fact(n));
    return 0;
}

int fact(int n)
{
    int i, pro = 1;
    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        for (i = 1; i <= n; i++)
        {
            pro = pro * i;
        }
        return pro;
    }
}