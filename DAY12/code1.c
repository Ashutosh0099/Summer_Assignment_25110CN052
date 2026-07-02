#include <stdio.h>

int pallindrome(int n)
{
    int rev = 0, rem, temp;
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    return rev;
}

int main()
{
    int n, rev;
    printf("enter the value of  : ");
    scanf("%d", &n);
    rev = pallindrome(n);
    if (rev == n)
    {
        printf("%d is a pallindrome number\n", n);
    }
    else
    {
        printf("%d is not a pallindrome number\n", n);
    }
    return 0;
}