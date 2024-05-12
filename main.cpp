#include <stdio.h>
void bubbleSort(int data[], long arraySize) {
    int temp;
    for (long i = 0; i < arraySize; i++) {
        for (long j = 0; j < arraySize - 1; j++) {
            if (data[j] > data[j+1]) {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}
int main() {
    printf("Original array: ");
    for (long i = 0; i < arraySize; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    bubbleSort(data, arraySize);
    printf("Sorted array: ");
    for (long i = 0; i < arraySize; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
