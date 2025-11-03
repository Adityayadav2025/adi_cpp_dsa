#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int pos = start;
    for (int i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    swap(arr[pos], arr[end]); 
    return pos;
}

void quicksort(int arr[], int start, int end) {
    if (start >= end) return;
    int pivotIndex = partition(arr, start, end);
    quicksort(arr, start, pivotIndex - 1);
    quicksort(arr, pivotIndex + 1, end);
}

int main() {
    int arr[] = {1, 2, 67, 12, 4, 8, 10, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
