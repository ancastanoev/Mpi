#include <stdio.h>
void selectionSort(int data[], long arraySize) {
    for (long i = 0; i < arraySize - 1; i++) {
        int iMin = i;
        for (int j = i + 1; j < arraySize; j++) {
            if (data[j] < data[iMin]) {
                iMin = j;
            }
        }
        int temp = data[i];
        data[i] = data[iMin];
        data[iMin] = temp;
    }
}
int main() {
    selectionSort(data, arraySize);
    printf("Sorted array: ");
    for (long i = 0; i < arraySize; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
