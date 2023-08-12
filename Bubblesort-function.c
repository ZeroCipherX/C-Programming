#include <stdio.h>

int swap(int arr[]);

int main() {
    int arr[7], i, x;
    for (i = 0; i < 7; i++) {
        printf("Enter array element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

swap(arr);

    printf("Array elements in ascending order:\n");
    for (i = 0; i < 7; i++) {
        printf("%d\n", arr[i]);
    }
}

int swap(int arr[]) {
    int i, j, temp;
    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 7; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
