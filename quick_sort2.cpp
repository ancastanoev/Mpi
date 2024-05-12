#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quickSort2(int data[], int start, int end) {
    int i = start, j = end;
    int pivot = data[(start + end) / 2];
    while (i <= j) {
        while (data[i] < pivot)
            i++;
        while (data[j] > pivot)
            j--;
        if (i <= j) {
            swap(&data[i], &data[j]);
            i++;
            j--;
        }
    }
    if (start < j)
        quickSort2(data, start, j);
    if (i < end)
        quickSort2(data, i, end);
}
int main() {
    quickSort2(data, 0, arraySize - 1);
    printf("Sorted array: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
