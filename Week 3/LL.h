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

class LinkedList{
    // attributes (public)
        // a head pointer (for the first item in the list)
    public:
        LLNode *head;

    // define a constuctor for this class that will
        // assign head with nullptr    
        LinkedList(){
            head = nullptr;
        }
    // define a method print()
        // no input parameters
        // prints the data of all nodes in the list in order
        // EX: 5 ==> 10 ==> 15
        // we print: 5 10 15 (done)
        // if the list is empty, print "empty!"
    void print(){
        // the list is empty
        if(head == nullptr){
            cout << "List is empty!" << endl;
            return;
        }
        // print the list items 
            // start from head
            // continue as long as head is not nullptr
            // in between each print, move forward one node
        for(LLNode *current = head; current != nullptr; current = current -> next){
            cout << current -> data << " ";
        }
        cout << "(done)" << endl;
    }

    // go to the end of the list and print the last elemet
    void printLast(){
        if(head == nullptr){
            cout << "List is empty!" << endl;
            return;
        }
        for(LLNode *current = head; current != nullptr; current = current->next){
            // is this the last item
            if(current -> next == nullptr){
                cout << current -> data << endl;
            }
        }
    }

        // return true if the target number is in the list
    bool findValue(int target){
        if(head == nullptr){
            cout << "List is empty!" << endl;
            return false;
        }
        for(LLNode *current = head; current != nullptr; current = current->next){
            // is this the target?
            if(current -> data == target){
                cout << "found it!" << endl; // This isn't needed but test to see if it can find the data
                return true;
            }
        }
        // if we never found target, return false
        return false;
    }

    void removeNext(int target){
        for(LLNode *current = head; current != nullptr; current = current -> next){
                // is this the target?
            if(current -> data == target){
                // make a temporary pointer to a node
                LLNode *temp = current -> next;
                // change the current -> next node to skip over the node we want to delete
                current -> next = current -> next -> next;
                // remove the next node
                // current -> next = nullptr; // This will create a memory leak
                delete temp;
            }
        }
    }

    // void insertNext(int target, int newVal){
    //     for(LLNode *current = head; current != nullptr; current = current -> next){
    //         // is this the target?
    //         if(current->data == target){
    //             // add a new node with newVal after the current node
    //             // STEP 1: make a brand new node with newVal

    //             // STEP 2: connect your new node to the next node in the List

    //             // STEP 3: connect your current node to the new node
                
    //         }
    //     }
    // }
};