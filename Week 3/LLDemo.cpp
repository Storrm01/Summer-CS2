#include<iostream>
using namespace std;

#include "LL.h"

int main(){
    // use dynamic allocation to create a brand new integer
    int *ptr1 = new int;
        // give a value of 10
    *ptr1 = 10;

    // use the same method to make a second
    int *ptr2 = new int;
        // give a value of -45
    *ptr2 = -45;
    // and a third
    int *ptr3 = new int;
        // give a value of 3
    *ptr3 = 3;

    // Declare a linked list Node (LLNode), with data 10
        // Use dynamic allocation
    LLNode *first = new LLNode(10);
        // as an example, dereference first, access its data
            // assign with 10
    // (*first).data = 10; // access via pointer and assign
    first -> data = 10;

    // Create another node second wit data -45
    LLNode *second = new LLNode();
    second -> data = -45;

    // Assign the "next" pointer of first to be second
        // ****This links first to second****
    first -> next = second;
    
    // use first to print the data in the first node
    cout << first -> data << endl;

    // what is the difference between these two
        // second
        // first -> next
        cout << second << endl;
        cout << first -> next << endl;

    // print the data of the second node, using only first
    cout << first -> next -> data << endl;

    // use second's next attribute to create a new node
    second -> next = new LLNode(3);

    // print the data in the third node
    cout << second -> next -> data << endl;
    // print the data in the third node using only first
    cout << first -> next -> next -> data << endl;
    // create a fourth node with a 1 as data
        // using only first pointer
    first -> next -> next -> next = new LLNode(1);

}