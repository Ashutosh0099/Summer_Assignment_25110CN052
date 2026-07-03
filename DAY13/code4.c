#include <stdio.h>

int main()
{
    int a[100], n, i;
    printf("enter the number of elements in array : ");
    scanf("%d", &n);
    printf("enter the elemennts in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int counteven = 0, countodd = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    printf("count of even numbers in array is %d \n", counteven);
    printf("count of odd numbers in array is %d \n", countodd);
    return 0;
}
