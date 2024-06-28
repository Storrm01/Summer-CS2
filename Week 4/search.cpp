#include <iostream>
using namespace std;

#include "binSearch.h"

int main(){
    int arr[200];
    arr[0] = 0;
    for(int i = 1; i < 200; i++){
        arr[i] = arr[i-1] + (rand() % 3) + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << binSearch(arr, 200, 399);
    cout << endl;

    int arr2[200];
    for(int i = 0; i < 200; i++){
        arr[i] = rand() % 1000;
        cout << arr2[i] << " ";
    }
    cout << endl;

    bubbleSort(arr2, 200);
    for(int i = 0; i < 200; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}

