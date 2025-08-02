#include <stdio.h>

int main() {
    int arr[] = {5, 9, 2, 11, 3, 7, 6, 8, 10, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest1 = arr[0];
    int largest2 = arr[0];
    int largest3 = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest1) {
            largest3 = largest2;
            largest2 = largest1;
            largest1 = arr[i];
        } else if (arr[i] > largest2) {
            largest3 = largest2;
            largest2 = arr[i];
        } else if (arr[i] > largest3) {
            largest3 = arr[i];
        }
    }

    printf("Largest three elements: %d, %d, %d\n", largest1, largest2, largest3);

    return 0;
}
