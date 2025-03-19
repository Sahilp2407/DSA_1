#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int partitionIndex = i + 1;

        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main() {
    int arr[] = {3, 1, 4, 5, 9, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1, n2 = right - mid;
//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++) L[i] = arr[left + i];
//     for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) arr[k++] = L[i++];
//         else arr[k++] = R[j++];
//     }
//     while (i < n1) arr[k++] = L[i++];
//     while (j < n2) arr[k++] = R[j++];
// }

// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);
//         merge(arr, left, mid, right);
//     }
// }

// int main() {
//     int arr[] = {410, 385, 279, 752, 451, 523, 961, 354, 550, 620};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     mergeSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {5, 6, 2, 4, 7, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {5, 6, 2, 4, 7, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }