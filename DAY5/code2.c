#include <stdio.h>
int fact(int n)
{
    int pro = 1;
    int i;

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
int main()

{
    int num1, num;
    int rem;
    int sum = 0;

    printf("enter the value of num : ");
    scanf("%d", &num);
    num1 = num;

    while (num1 > 0)
    {
        rem = num1 % 10;
        sum = sum + fact(rem);
        num1 = num1 / 10;
    }
    printf("sum of factorial of digits of %d is %d\n", num, sum);

    if (sum == num)
    {
        printf("%d is strong number\n", num);
    }
    else
    {
        printf("%d is not a strong number\n", num);
    }

    return 0;
}
