#include <stdio.h>
void primeno(int a);
int main()
{
    int x;
    printf("enter the value of x : ");
    scanf("%d", &x);
    primeno(x);
    return 0;
}

void primeno(int a)
{
    int i, count = 0;
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            count++;
            printf("%d is not prime", a);
            break;
        }
        else
        {
            printf("%d is prime ", a);
        }
    }
}