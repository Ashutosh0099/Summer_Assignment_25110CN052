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

    int element, count;
    printf("Enter the element whose frequency is to be found :");
    scanf("%d", &element);
    count = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] == element)
        {
            count++;
        }
    }
    printf("the frequency of the element %d in array is %d \n", element, count);
    return 0;
}
