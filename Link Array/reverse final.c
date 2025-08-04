#include <stdio.h>
int main()
{
    int n;

    printf("How many numbers? ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the numbers: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
// Print original array
    printf("Original Array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Reverse the array
    for(int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print reversed array
    printf("\nReversed Array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
