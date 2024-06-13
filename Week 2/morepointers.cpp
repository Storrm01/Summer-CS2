#include <iostream>
using namespace std;
#include "ptrFuncs.h"

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
    

}
