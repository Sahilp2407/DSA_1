#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as the pivot
    int i = low - 1;       // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { // If current element is smaller than pivot
            i++;
            swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
        }
    }
    swap(arr[i + 1], arr[high]); // Swap the pivot element to its correct position
    return i + 1;                // Return the partition index
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partitioning index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
// Naman Sethi .<>    

// 

    }
}
// 
//  // Naman Sethii <>|<> 
// 
// Function to print the array
void printArray(int arr[], int size) { 

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function 
// Main Function hamaeshaa same raheegaa 
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}












