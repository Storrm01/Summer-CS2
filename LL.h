#include<iostream>
using namespace std;

// Define a class for a LinekdList
class LLNode{
    public:
        int data;
        // pointer to the next LLNode
        LLNode *next;

        // Define a constructor for this class
            // Default data is 0
                // use a parameter to set the data
            // Default address of the next Node is nullptr
        LLNode(int inData = 0){ // Dont put "&" in parameter due to pointer already getting the address with "LLNode *next"
            data = inData;
            next = nullptr;
        }
};