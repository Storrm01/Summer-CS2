#include <iostream>
using namespace std;


// Define a function that will fill an array with
    // sequential values starting from zero
// Ex: arr[4] = {0,1,2,3}
    // input: arr of integers, and length n

void arrFill(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = i;
    }
}


// display the contents of any array of integers
    // with length "length"
void printArray(int arr[], int length){
    for(int i = 0; i < length; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
}
// if this is first it prints 0's
// needs to be second


// define a function negatives()
    // will print out all elements of an array below zero
    // input: array of integers, length
    // Ex: arr[5] = {3,-6,0,2,-10}
    // print: -6 -10
void negatives(int arr[], int x){
    for(int i = 0; i < x; i++){
        if(arr[i] < 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

// define function arrSum() add up all numbers in an array
    // input: array of integers, length
    // returns: sum of all elements
    // Ex: arr[5] = {3,-6,0,2,-10}
    // return 3 + -6 + 0 + 2 + -10 = -11

int arrSum(int arr[], int l){
    int sum = 0;
    for(int i = 0; i < l; i++){
        sum = arr[i] + sum;
    }
    return sum;
}

// Define a function incFill())
    // input: array of integers, length, starting value (int)
    // return: nothing
    // fill an array with values starting from a starting value
        // each value should be incremented by 3
    // EX: arr[5], start = 42
    //after function: arr[5] = {42, 45, 48, 51, 54}
void incFill(int arr[], int length, int start){
    for(int i = 0; i < length; i++){
        arr[i] = start; 
        start = start + 3;
    }
}

int largerSum(int arr1[], int arr2[], int length1, int length2){
    int sum1;
    int sum2;
    for(int i = 0; i < length1; i++){
        sum1 = arr1[i] + sum1;
    }
    for(int i = 0; i < length2; i++){
        sum2 = arr2[i] + sum2;
    }
    if(sum1 > sum2){
        return sum1;
    }
    else{
        return sum2;
    }
}