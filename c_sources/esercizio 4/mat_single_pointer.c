#include <stdio.h>

int *buildDynamicArray(int *arr, int size) {
    arr = (int *) malloc(size * sizeof(int));

    int count = 0, preValue = 0; 
    for (int i = 0; i < size; i++) {
            preValue = *(arr + i) = preValue + ++count;
    }

    return arr;
}

void printDynamicArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d \t", *(arr + i));
    }
}

int main(void) {
    int *arr;
    int size = 5;

    arr = buildDynamicArray(arr, size);
    printDynamicArray(arr, size);

    free(arr);

    return 0;
}