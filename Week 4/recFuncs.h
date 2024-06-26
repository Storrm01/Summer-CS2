#include<iostream>
using namespace std;
// Recursive function definitions

// define a function that will return true if a value is in an array
    // false if the value is not in the array
    // input: array of integers, length of the array (number of elements)
    // EX: arr[4] = {10, 20, 30, 40}
        // findVal(arr,4,30) ==> true
        // findVal(arr,4,31) ==> false
bool findVal(int arr[], int n, int target){
    // start with the first element
    // keep going as long as we still have elements to check
    // if we find the target, return true. otherwise, keep going
        // if we run out of elements to check, return false
   for(int i = 0; i < n; i++){
    if(arr[i] == target){
        return true;
    }
        return false;
   }
}

// RECURSION
    // alternative approach to iteration

// countdown function
    // define a function that will start at any number
        // and print all  numbers down to zero
        // EX: countdown(3) ==> 3 2 1 blast-off!
void countDown(int start){
    for(int i = start; i >= 0; i--){
        cout << i << " ";
    }
    cout << "Blast-off!" << endl;
}

// 2 parts of a recursive function
    // BASE CASE
        // what is the simplest version of this problem? I can solve with no loop
    // RECURSIVE CASE
void countdownR(int start){
    cout << "starting countdown from: " << start << " !" << endl; // used to see the function work properly
    // BASE CASE
        // if start is zero, just prinit 0 blast-off!
    if(start == 0){
        cout << start << " Blast-off!" << endl;
    }
    // what if start is 1
    else {
        // STEP 1: complete 1 step of the "large" problem
        cout << start << " ";
        // we need this ==> cout << start << " Blast-off!" << endl;
        // STEP 2: call the same function with a smaller version of the problem
            // to do the rest
        countdownR(start-1);
    }
}

void countdownAndUpR(int start){
    // BASE CASE
        // if start is zero, just prinit 0 blast-off!
    if(start <= 0){
        cout << start << " Blast-off!" << endl;
    }
    // what if start is 1
    else {
        // STEP 1: complete 1 step of the "large" problem
        cout << start << " ";
        // we need this ==> cout << start << " Blast-off!" << endl;
        // STEP 2: call the same function with a smaller version of the problem
            // to do the rest
        countdownAndUpR(start-1);

        cout << start << " ";
    }
}

bool findValR(int arr[], int n, int target){
    if(n == 1){
        // check if the value is the target
        if(arr[0] == target){
            return true;
        }
        else{
            return false;
        }
    }
    else if(arr[0] == target){
        return true;
    }
    else{
        // the first thing is not the target, so look in the rest of the array
            // the rest of the array
            // starts from where?
            // how many values?
            // what is the target?
        return findValR(arr+1, n-1, target);
    }
}