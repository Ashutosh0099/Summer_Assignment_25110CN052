#include <stdio.h>

int main()
{
    int A[100], n, i;
    printf("enter the number of elements in array : ");
    scanf("%d", &n);
    printf("enter the elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &A[i]);
    }

    int sum = 0;
    float avg;
    for (i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    avg = (float)sum / n;
    printf("sum of elements of an array is %d\n", sum);
    printf("average of elements of an array is %.2f\n", avg);
    return 0;
}