#include <iostream>
using namespace std;

class Pizza{};

int main(){
    // Exercise for pointer arithmetic
    int* ptrA, *ptrB;
    int a = 6;
    int b = 4;

    ptrA = &b; 
    ptrB = &a;

    // what are values of ptrA, *ptrB, *ptrA, and *ptrB (&b, &a, 4, 6)

   *ptrA = 8; // *ptrA = 8
    a = 3 + (*ptrB); // a = 9 so *ptrB = 9
    *ptrA = *ptrA + 5; // *ptrA = 13 so b = 13
    ptrB = &b; // ptrB = &b = 13
    ptrB = ptrA; // ptrB = ptrA && 13 == 13
    *ptrB = *ptrB - 4; // *ptrB = 9 && b = 9
    // what are values of ptrA, ptrB, *ptrA, and *ptrB
        // ptrA = address of b
        // ptrB = address of a]b
        // *ptrA = 9
        // *ptrB = 9
            // what is a and what is b
            // a = 9
            // b = 9
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // dynamic allocation
    // to request memory for a new object in the heap, we use "new" keyword
        // the format is new {datatype of object you want}
    // for a new integer in the heap
    int *ptr = new int; // asked my system to find 4 bytes (int) of memory and allocate to my program    

    // ptr is storing the address of our dynamically allocated integer
    // put a value of 10 in this integer
    *ptr = 10;
    // print the value of the integer
    cout << *ptr << endl;
    // use ptr to create another new integer
        // change this code so that you can still access the 10
    int *ptr2 = ptr;
    ptr = new int;
    // what is the value stored at ptr's address? nothing currently
    // where is the 10? 
        // It's not gone, but we will never find it.
        // this is called a "memory leak"
        // we need to make sure that we always can access all of our memory
    // example
        // fix this code so you can still access the value 7
    int x = 7;
    int y = x;
    x = 99; // what happened to the 7?

    // option 2 to prevent memory leak
        // in this case, I don't care about the old value, I just don't want a memory leak
    
    delete ptr; // free the memory at the locatioin ptr points to
    ptr = new int;


    // declare a pointer to a brand new string object
    string *object = new string;

    // declare a pointer to a brand new Pizza object
    Pizza *pzaPtr = new Pizza;

    // declare a pointer to a brand new array of 100 decimal values
    float *decArrPtr = new float[100];
        // access some item in this array, we use the same notation as regular array
    decArrPtr[6] = 17;
    
}
