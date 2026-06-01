#include <stdio.h>

int main()
{
    int n;
    int pro = 1;
    int rem;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        pro = pro * rem;
        n = n / 10;
    }
    printf("product of the digits of a given number is %d\n", pro);
    return 0;
}