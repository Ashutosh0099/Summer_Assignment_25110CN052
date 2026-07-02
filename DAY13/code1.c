#include <stdio.h>
int main()
{
    int A[100], n, i;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    printf("Enter the elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Elements in array are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}