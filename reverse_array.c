#include <stdio.h>

#define MAX_SIZE 100

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int num;

    printf("Enter numbers (Ctrl+D to end input):\n");
    
    // Read numbers until EOF
    while (size < MAX_SIZE && scanf("%d", &num) == 1) {
        arr[size++] = num;
    }

    printf("\nOriginal array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
