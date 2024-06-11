#include<iostream>
using namespace std;

// instead of passing by value
    // we will pass the address of x (pass by reference)
void plusOne(int &burgers){
    cout << "   address of burgers in the function: " << &burgers << endl;
    burgers++; // adding one to x
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    
}

int main(){
    // Memory
        // Stack
        // Heap (everything else)
    // declare an integer
    int x = 4; // creates a lable "x" that will refer to
                // a value stored somewhere in the stack

    // address
        // a.k.a. reference to
    int arr[3];
    cout << arr << endl; // adress of the first element in the array

    // print the value stored in x
    cout << x << endl;
    // print the *address* of x
    cout << &x << endl;

    // print the address of the 2nd item in arr
    cout << &arr[1] << endl;

    plusOne(x);
    cout << "value of x after function: " << endl;
    cout << "the address of x after function: " << &x << endl;


    // print the addresss of the first item in the array
    cout << "address of first element: " << &arr[0] << endl;

    // print the next address
    cout << "address of the next element: " << (&arr[0] + 1) << endl;


    // pointers
        // pointers store addresses (that's all.)
    // declare a poiner to an integer
    int *addressOfX;
    // assign address of x to this pointer
        // now we have a pointer to x
    addressOfX = &x;
    // print thing stored in this pointer
    cout << "pointer address: " << addressOfX << endl;

    // we used & to access "the address of" something
        // we use * to access "the value stored at an address"
    // this is dereferencing (* operator on a pointer)
    cout << "value at x's address: " << *addressOfX << endl;

    // declare a pointer "ptr"
    int *ptr;
    // assign this pointer with the address of 
        // 3rd element of arr
    ptr = &arr[2];
    // dereference ptr to assign a value of 99 at this address
    *ptr = 99;
    // dereference "ptr" to print the value at this address
    cout << "value at ptr's address: " << *ptr << endl;
    // print the value of arr[2]
    cout << "the value of arr[2]: " << arr[2] << endl;

    // what is the value of arr[2] after this code
    ptr = &x;
    cout << "value at ptr's address: " << *ptr << endl;
    cout << arr[2] << endl;
}