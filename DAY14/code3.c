#include <stdio.h>

int main()
{
    int A[100], i, n;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    printf("Enter the elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int largest, second_largest;
    if (A[0] > A[1])
    {
        largest = A[0];
        second_largest = A[1];
    }
    else
    {
        largest = A[1];
        second_largest = A[0];
    }

    if (n < 2)
    {
        printf("Invalid input. Array should have at least two elements.\n");
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (A[i] > largest)
            {
                second_largest = largest;
                largest = A[i];
            }
            else if (A[i] > second_largest && A[i] != largest)
            {
                second_largest = A[i];
            }
            else if (largest == second_largest && A[i] != largest)
            {
                second_largest = A[i];
            }
        }
        if (largest == second_largest)
        {
            printf("There is no second largest element in the array.\n");
        }
        else
        {
            printf("The second largest element in the array is: %d\n", second_largest);
        }
    }
    return 0;
}