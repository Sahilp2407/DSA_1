#include<iostream>
using namespace std;
int main() {

    int x;
    cout << "Enter the number of elements in the array: ";
    cin >> x;
    int arr[x];
    // Input array elements
    for (int i = 0; i < x; i++) {    
        cout << "Enter the element for index " << i << ": ";
        cin >> arr[i];
    }
    // Display the array entered by the user
    cout << "The array you entered is: " ;
    for (int i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }
   
    cout << endl;
    // Insertion sort algorithm
    for (int j = 1; j < x; j++) {   
        int k = arr[j];  // Current element to be placed correctly/   
        int h = j - 1;
        // Shift elements to the right to create position for 'k'
        while (h >= 0 && arr[h] > k) {
            arr[h + 1] = arr[h];
            h--;
        }
        arr[h + 1] = k;  // Place 'k' at the correct position
    }
    // Display the sorted array
    cout << "The sorted array is: ";
    for (int z = 0; z < x; z++) {
        cout << arr[z] << " ";
    }
    cout << endl;
    return 0;

}



