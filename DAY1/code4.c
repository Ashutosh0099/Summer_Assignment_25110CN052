#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("enter the value of n ; ");
    scanf("%d", &n);

    while (n != 0)
    {

        n = n / 10;
        count++;
    }
    printf(" the number of digits in a given number is %d \n", count);
    return 0;
}