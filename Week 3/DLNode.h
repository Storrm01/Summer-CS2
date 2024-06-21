#include<iostream>
using namespace std;

// Define a new class DLNode
    // We want a linked list node (data and pointer to another node)
    // This node should have an additional pointer for navigating to
        // previous node
class DLNode{
    public:
        int data;
        DLNode *next, *prev;

        DLNode(int inData = 0){
            //assign the data
            data = inData;
            // assign the correct starting addresses for next and prev
            next = nullptr;
            prev = nullptr;
    }
};