// #include <iostream>
// using namespace std;
// void Bubblesort (int arr [] , int n ){
//     bool swapped ;
//     for (int i = 0; i < n-1 ; i++)
//     {
//         /* code */
//         swapped = false ;
//         for (int j = 0; i < n-i-1 ; j++)
//         {
//             /* code */
//             if (arr[i], arr[j+1])
//             {
//                 /* code */
//                 swapped = true ;
//             }
            
//         }
//         if (!swapped)
//         {
//             /* code */
//             break;
//         }
        
//     }
    
// }

// int main () {

    


//     return 0 ;
// }




#include <iostream>
using namespace std;

void Bubblesort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) { // Corrected loop condition
            if (arr[j] > arr[j + 1]) {       // Corrected comparison
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped, the array is already sorted
        if (!swapped)
            break;
    }
}



int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl; /// Just to Print the unsorted Arraayy

    Bubblesort(arr, n);  // calling the Bubble Sort Function with arr,n parameter

    cout << "Sorted array: "; 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;  // just to call the Sorted Array 




    return 0;
}



// 
// 






