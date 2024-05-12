#include <iostream>
using namespace std;
void shell_sort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int arraySize = sizeof(data) / sizeof(data[0]);
    cout << "Array before sorting: ";
    for (int i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    shell_sort(data, arraySize);
    cout << "Array after sorting: ";
    for (int i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}
