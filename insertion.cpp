#include <stdio.h>
void insertionSort(int data[], long arraySize) {
    int temp;
    for (long i = 1; i < arraySize; i++) {
        temp = data[i];
        long j;
        for (j = i - 1; j >= 0 && data[j] > temp; j--) {
            data[j + 1] = data[j];
        }
        data[j + 1] = temp;
    }
}
int main() {
    insertionSort(data, arraySize);
    printf("Sorted array: ");
    for (long i = 0; i < arraySize; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
