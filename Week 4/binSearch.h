#include<iostream>
using namespace std;

// Define a function that will return the index of a target
    // value in an array
    // if the value is not present return -1
    // EX: arr[5] = {1, 4, 2, 70, 5}
    // seqSearch(arr, 5, 4) ==> returns 1
    // seqSearch(arr, 5, 70) ==> returns 3
    // seqSearch(arr, 5, 6) ==> returns -1

int seqSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            // we found it!
            return i;
        }
    }
    // we didn't find it after searching everything
    return -1;
}

// to help us search, we should also include the range of indexes
    // to search, start and end
// This algo only works if its in order
int binSearch(int arr[], int n, int target){
    int start = 0;
    int end = n - 1;
    // mid should be in between start and end
    int mid = (start + end) / 2;
    

    while(start <= end){
        cout << "searching range: " << start << "-" << end << endl;
        // do the binary search
        if(arr[mid] == target){
            // we found it!
            return mid;
        }
        // middle value is less than target?
        else if(arr[mid] < target){
            // search on the right
            start = mid + 1; // moved the start of our range
        }
        // middle value is greater than target?
        else{
            // search on the left
            end = mid - 1; // moved the end of our range
        }
        mid = (start + end) / 2; // make sure the middle is updated
    }
    return -1;
}

void bubbleSort(int arr[], int n){
    int i, i2, temp;
    for(int count = 0; count < n-1; count++){
        i = 0;
        i2 = 1;
        while(i2 < n){
            // are these values out of order?
            if(arr[i] > arr[i2]){
                // YES, Swap them
                // save one to a temp
                // copy over
                // assign temp
                temp = arr[i];
                arr[i] = arr[i2];
                arr[i2] = temp;
            }
            i++;
            i2++;
        }
    }
}