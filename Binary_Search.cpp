// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int key;
//     cout << "Enter the element to be searched: ";
//     cin >> key;
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         int mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             cout << "Element found at index " << mid << endl;
//             break;
//         }
//         else if (arr[mid] < key)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     if (s > e)
//     {
//         cout << "Element not found" << endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int binarysearch(int arr[], int beg,int end, int val)
{
    if(beg<=end)
    {
        int mid = (beg+end)/2;
        if(arr[mid]==val)
        {
            return mid;
        }
        else if(arr[mid]>val)
        {
            return binarysearch(arr,beg,mid-1,val);
        }
        else
        {
            return binarysearch(arr,mid+1,end,val);
        }
        if (beg>end)
        {
            return -1;
        }
    }
    return -1;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    int result = binarysearch(arr,0,n-1,key);
    if(result==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at index "<<result<<endl;
    }
    return 0;
}













