#include<iostream>
using namespace std;

int main(){
    // Use dynamic allocation to create a new array of 5 string objects
    string *arr = new string[5];
    // pointer to a random element in the array
    int randIndex = rand() % 5; // random number between 0-4

    // create a pointer to the element in the array at index "randInex"
    string *dontPrint = &arr[randIndex];

    // print everything in the array, except for the location of the pointer above
        // you cannot use "randIndex" here to skip
    if(dontPrint == true){
        
    }

}