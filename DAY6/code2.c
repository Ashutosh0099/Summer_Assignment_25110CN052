#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number in binary : ");
    scanf("%d", &n);

    int dec = 0;
    int i, rem;

    for (i = 0; n > 0; i++)
    {
        rem = n % 10;

        if (rem != 0 && rem != 1)
        {
            printf("invalid binary number");
            return 0;
        }
        dec = dec + rem * pow(2, i);
        n = n / 10;
    }

    printf(" the number in decimal is : %d ", dec);
    return 0;
}