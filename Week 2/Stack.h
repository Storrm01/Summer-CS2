#include <iostream>
using namespace std;

// Define a class class Stack, which contains the following:
    // a pointer (we will use to access an array)
    // th capacity of our array 
    // the number of items in our array
class Stack{
    private:
    int *arr;
    int capacity;
    int numItems;
    // Create two public methods
        // 1. Constructor
            // this should use dynamic allocation to create
                // a new array for our pointer
            // capacity is input parameter (default is 3)
            // initially we should have zero items in our array
        // 2. print()
            // print the contents of the array(not the unused indices)
    public:
    Stack(int cap = 3){
        arr = new int[cap];
        capacity = cap;
        numItems = 0; // nothing in array when we start
    }
    void print(){
        if(numItems == 0){cout << "nothing in here!";}
        for(int i = 0; i < numItems; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // define a method insert() which will
        // take in an integer value
        // add it to the top of the Stack
    void insert(int val){
        // put it on the Stack (if the stack is not full)
        if(numItems == capacity){
            cout << "The array is full!" << endl;
            // instead of an error message, we want to make the stack larger when it's full
        }
        else{
            // update the number of items
            arr[numItems] = val;
            numItems++;
            cout << "array contents: ";
            print();
        }
        //update the Number of items
    }
    // define a method resize() that wil change the size of the array
        // input boolean parameter "grow" with default true
    void resize(bool grow = true){
        // decide my new capacity based on if we are growing
            // if grow, double the capacity
            // if not, half the capacity
        int newCap;
        if(grow){
            newCap = capacity * 2;
        }
        else{
            newCap = capacity / 2;
        }

        // STEP 1 - new array
        int *tempArr = new int[newCap];

        // STEP 2 - copy everything oer
        for(int i = 0; i < numItems; i++){
            // grab old thing, assign to new thing
            tempArr[i] = arr[i];
        }

        // STEP 3 - delete the old array
        delete [] arr;

        // STEP 4 - make arr take us to the new array
        arr = tempArr;
    }
};