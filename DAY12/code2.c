#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int sum = 0, count = 0, rem, temp;
    temp = n;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    return sum;
}

int main()
{
    int n, sum;
    printf("enter the value of n : ");
    scanf("%d", &n);
    sum = armstrong(n);
    if (sum == n)
    {
        printf("%d is an armstrong number \n", n);
    }
    else
    {
        printf("%d is not an armstrong number \n", n);
    }
    return 0;
}