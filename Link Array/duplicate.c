#include <stdio.h>

int main() {
    int arr[] = {2, 8, 1, 6, 3, 7, 5, 4, 2, 3, 5}; // array to be searched
    int size = sizeof(arr) / sizeof(arr[0]); // calculate size of array

    // iterate through each element in the array
    for (int i = 0; i < size; i++) {
        // check if element is a duplicate
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate element found: %d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}
