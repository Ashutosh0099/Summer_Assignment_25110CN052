#include <stdio.h>

int main()
{
    int A[100], i, j, n;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    printf("Enter the elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Duplicates elements are : ");

    int duplicate;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                duplicate = A[i];
                printf("%d ", duplicate);
                break;
            }
        }
    }
    return 0;
}