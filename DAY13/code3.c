#include <stdio.h>

int main()
{
    int A[100], n, i, j;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    printf("Enter the elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int temp1 = A[0];
    for (i = 0; i < n; i++)
    {
        if (A[i] > temp1)
        {
            temp1 = A[i];
        }
    }
    printf("The largest element in the array is : %d\n", temp1);

    int temp2 = A[0];
    for (i = 0; i < n; i++)
    {
        if (A[i] < temp2)
        {
            temp2 = A[i];
        }
    }
    printf("The smallest element in the array is : %d\n", temp2);
    return 0;
}