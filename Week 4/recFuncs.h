#include<iostream>
using namespace std;


// Define a class for a LinekdList
class LLNode{
    public:
        int data;
        // pointer to the next LLNode
        LLNode *next;

        // Define a constructor for this class
            // Default data is 0
                // use a parameter to set the data
            // Default address of the next Node is nullptr
        LLNode(int inData = 0){ // Dont put "&" in parameter due to pointer already getting the address with "LLNode *next"
            data = inData;
            next = nullptr;
        }
};
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

// Plan recursive function for printing hello()
    // input: int n (the number of tiems to print helo)
void helloR(int n){
// BASE CASE:
// if n is zero (null case)
    // we are done automatically
if(n == 0){
    cout << endl;
    return;
}
// RECURSIVE CASE:
    // do 1 step
        // print hello 1 time
    // call a function to do the rest
        // use printHello(n-1) to print hello the other n-1 times
else{
    cout << "hello ";
    helloR(n-1);
}
}

int rFunc(int a, int b){
    if(a <= 0 || b <= 0){
        return a + b;
    }
    else{
        return 1 + rFunc(a-1, b); // RECURSIVE CASE because it calls its own function again
    }
}

// define a function sumEvens()
    // input: a starting number(should be even)
    // function should return the sum of all even numbers from the starting number
        // down to zero
    // EX: n = 10, returns: 10 + 8 + 6 + 4 + 2 + 0 = 30
// BASE CASE
    // if start = 0, return start
// RECURSIVE CASE
    // add the starting number to the sum of eveerthing up to n-2

int sumEvens(int start){
    if(start % 2 != 0){
        start--;
    }
    if(start == 0){
        return 0;
    }
    else{
        return start + sumEvens(start - 2);
    }
}

// print a linked list
    // 1 ==> 2 ==> 3 ==> 4
        // 1 2 3 4

// Define a function to print the linked list recursively
    // input(Node * start) head is the first thing in the list we want to print
// BASE CASE (null case)
    // if start = 0 return
// RECURSIVE CASE
    // 1 step: print start's data "start -> data"
    // the rest: print the list starting from "start -> next"
// vv THIS IS HOW TO DO IT vv
// void printLLR(Node *start){
//     if(start == nullptr){
//         cout << endl;
//     }
//     else{
//         cout << start -> data << " ";
//         printLLR(start -> next);
//     }
// }
