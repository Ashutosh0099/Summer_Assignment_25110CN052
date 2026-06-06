#include <stdio.h>
int main()
{
    int n;
    printf("enter a number in decimal : ");
    scanf("%d", &n);
    printf("the number in binary is : ");

    while (n > 0)
    {
        int rem = n % 2;
        printf("%d", rem);
        n = n / 2;
    }
    return 0;
}