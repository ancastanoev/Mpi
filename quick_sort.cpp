#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int data[], int start, int end) {
    int pivot = data[end];
    int partitionIndex = start;
    
    for (int i = start; i < end; i++) {
        if (data[i] <= pivot) {
            swap(&data[i], &data[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(&data[partitionIndex], &data[end]);
    return partitionIndex;
}
void quickSort(int data[], int start, int end) {
    if (start < end) {
        int partitionIndex = partition(data, start, end);
        quickSort(data, start, partitionIndex - 1);
        quickSort(data, partitionIndex + 1, end);
    }
}
int main() {
    quickSort(data, 0, arraySize - 1);
    printf("Sorted array: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
