#include <iostream>
using namespace std;

void merge(int *arr, int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;

    // Create temporary arrays to store the two sub-arrays
    int left[n1], right[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        left[i] = arr[start + i];
    }
    for (int j = 0; j < n2; j++) {
        right[j] = arr[mid + 1 + j];
    }

    // Merge the two temporary arrays back into arr[start...end]
    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[] and right[] if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergesort(int *arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = (start + end) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main() {
    int size_arr = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    mergesort(arr, 0, size_arr - 1);

    // Print the sorted array
    for (int i = 0; i < size_arr; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
