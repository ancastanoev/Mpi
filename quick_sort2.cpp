#include<stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Tail-recursive QuickSort function
void quickSort(int data[], int left, int right) {
    while (left < right) {
        int i = left, j = right;
        int pivot = data[(left + right) / 2];
        
        // Partitioning
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

        // Recursively sort the smaller partition first
        if (j - left < right - i) {
            if (left < j)
                quickSort(data, left, j);
            left = i;
        } else {
            if (i < right)
                quickSort(data, i, right);
            right = j;
        }
    }
}
