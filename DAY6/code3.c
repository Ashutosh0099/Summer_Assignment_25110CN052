#include <stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    printf(" the count of set bits in a number is : %d", count);
    return 0;
}