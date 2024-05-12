#include <stdio.h>
void merge(int data[], int low, int pivot, int high) {
    int temp[high - low + 1];
    int h, i, j, k;
    h = low;
    i = low;
    j = pivot + 1;
    
    while ((h <= pivot) && (j <= high)) {
        if (data[h] <= data[j]) {
            temp[i] = data[h];
            h++;
        } else {
            temp[i] = data[j];
            j++;
        }
        i++;
    }
    
    if (h > pivot) {
        for (k = j; k <= high; k++) {
            temp[i] = data[k];
            i++;
        }
    } else {
        for (k = h; k <= pivot; k++) {
            temp[i] = data[k];
            i++;
        }
    }
    
    for (k = low; k <= high; k++) {
        data[k] = temp[k];
    }
}

void mergeSort(int data[], int low, int high) {
    int pivot;
    if (low < high) {
        pivot = (low + high) / 2;
        mergeSort(data, low, pivot);
        mergeSort(data, pivot + 1, high);
        merge(data, low, pivot, high);
    }
}

int main() {
    int arraySize = sizeof(data) / sizeof(data[0]);
    mergeSort(data, 0, arraySize - 1);
    printf("Sorted array: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
