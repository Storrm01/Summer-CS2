#include <iostream>
using namespace std;

#include "Stack.h"

int main(){
    //Use dynamic allocation to create a brand new
        // array of 3 integers
        // save the address with pointer ptr
    // int *ptr; this is declaring it, want to declare with the new int
    int *ptr = new int[3];
    // ptr = new int[3]; Dont want to redeclare the int
    // Use dynamic allocation to create a brand new array   
        // of 5 integers
        // save the address *also* with pointer ptr
            // without causing a memory leak
        // method 1 - create a second pointer
    int *oldArr = ptr;
        // method 2 - delete the old array
    delete [] ptr; // delete to free the memory and not cause a memory leak. need the "[]" to delete the whole array
    int *ptr = new int[5];
    // ptr = new int[5]; This Redeclares the same thing as int line 10

    // declare a Stack array of 6 items
    Stack ralph(3);
    // print the contents of this stack
    ralph.print();

    ralph.insert(10);
    ralph.insert(0);
    ralph.insert(-10);
    ralph.insert(88); // this should not be added

    ralph.print();


    ralph.pop();

    ralph.print();

    ralph.pop();
    ralph.pop();
    ralph.print(); // empty?

    ralph.pop(); // numItems is -1?
    ralph.pop(); // numItems is -2?

    ralph.print();

    ralph.insert(99);
    ralph.insert(42);
    ralph.insert(101);
    ralph.insert(808);
}