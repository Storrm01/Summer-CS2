#include <iostream>
using namespace std;
// Function Practice

// Define a function Hello()
    // that will print a greeting to a user
        // if the user's name is "World", print "Welcome!"
    // input: name of the user (function parameter)
    // return: nothing

string Hello(string name){
    if(name == "World"){
        cout << "Welcome" << endl;
    }
    else{
        cout << "Hello " << name << "!" << endl;
    }
    return 0;
}

// Define a function countdown() that will print a countdown
    // to zero from an input number "num"
    // input: the starting number
    // returns: the sum of all of the numbers from num to zero

int countdown(int start){
    int sum = 0;
    while(start >= 0){
        sum += start; // add the current number to the sum
        cout << start; 
    }
}

    void loop (int start, int end, int inc){
        if(start < end){
            for(int i = start; i <= end; i = inc + i){
                cout << i << " ";
        }
        }
        else{
            for(int i = start; i >= end; i = inc - i){
                cout << i << " ";
            }
        }
        cout << endl;
        }

        // Define a function skipArr() that wil print every *other*
        // value in an array of length n
        // arr(n) ==> {1,2,3,4,5}
        // print: 1 3 5
        // return the number of even values in the array
            // a number is even if the remainder is zero after /2
            // Ex: for array {1, 2, 3, 4, 5}
            // # of even values: 2 (2, 4)
int skipArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        // check if we need to print or not
            // print index 0,2,4,6...
        cout << arr[i] << " ";
        // check if the value is even
            //if so, add to some count
            }
            cout << endl;

            return 0;
        }


