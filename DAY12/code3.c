#include <stdio.h>

int fibonacci(int n)
{
    int t1 = 0;
    int t2 = 1;
    int temp;

    for (int i = 1; i <= n; i++)
    {

        if (i == 1)
        {
            printf("%d\n", t1);
        }
        else if (i == 2)
        {
            printf("%d\n", t2);
        }
        else
        {
            temp = t1 + t2;
            printf("%d\n", temp);
            t1 = t2;
            t2 = temp;
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}