#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) { 
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n; 
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    

    int target;
    cout << "Enter the element to search: ";
    cin >> target;


    int result = linearSearch(arr, n, target);


    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0 ;
}






