#include <stdio.h>

int main()
{
    int A[100], i, n, temp;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    printf("Enter the elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("original array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nreversed array is: ");
    /*int start = 0;
    int end = n - 1;

    while (start < end)
    {
        temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }*/

    for (i = 0; i <= n; i++)
    {
        if (i < n / 2)
        {
            temp = A[i];
            A[i] = A[n - i - 1];
            A[n - 1 - i] = temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
