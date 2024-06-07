#include <iostream>
using namespace std;

// Define a BetterArray class
    // the class should contain
    // an array of 5 integers
    // a capacity to store the number of things the array can hold (5)
    // number of items currently in the array (0-5)

class BetterArray{
    public:
        int arr[5];
        int capacity;
        int numItems;

        // Define a constructor for this class
            // all objects of this class start with empty arrays
            // of capacity 5
        BetterArray(){
            capacity = 5;
            numItems = 0;

            cout << "Your new array is ready!" << endl;
        }

        // Define a method addValue()
            // input: a new integer to add to the array object
            // it should automatically put the value in the first available slot
            // EX: BAobj = {1, 2, 3, _, _}
            // after addValue(6) ==== BAonj = {1, 2, 3, 6, _}
            // if the array is full, dont change anything
                // print a message to the user that it's full
        void addValue(int newVal){
            if(numItems == capacity){
                cout << "The array is full!" << endl;
            }
            else{
                arr[numItems] = newVal;
                numItems++;
            }
        }

        // Define a method print() that will print the contents of the array
            // only print items actually in the array
            // dont print the entire capacity unless its full
            // if the array is empty, print a message that it's empty
        void print(){
            if(numItems != 0){
                for(int i = 0; i < numItems; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            else{
                cout << "The array is empty!" << endl;
            }
        }
};