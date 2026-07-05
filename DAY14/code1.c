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

    int target, foundindex = -1;
    printf("Enter the element to be searched : ");
    scanf("%d", &target);
    for (i = 0; i < n; i++)
    {
        if (A[i] == target)
        {
            foundindex = i;
            break;
        }
    }
    if (foundindex != -1)
    {
        printf("%d is found at index %d\n", target, foundindex);
    }
    else
    {
        printf("%d is not found in the array\n", target);
    }
    return 0;
}