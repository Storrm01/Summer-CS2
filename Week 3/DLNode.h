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

class DLList{
    DLNode *head, *tail;
    DLList(){
        head = nullptr; // point the head to a null
        tail = nullptr; // point the tail to a null
    }

        // define a method insertBack()
            // which will take in an integer value and
                // create a new DLNode at the back of the list
                // with the value
            // remember to draw and create all links
        // CASE 1: the list is completely empty
            // create a node with a new value (use a temp pointer)
            // head and tail should point to this node
        // CASE 2: the list has at least one node
    void insertBack(int value){
        // create a new node
        DLNode *temp = new DLNode(value);
        // the list is empty
        if(head == nullptr){
        head = tail = temp;
        }
        else{
            // go to the end (tail)
            // connect temp to the end of tail (next)
                // link tail ==> temp
                tail -> next = temp;
                // link tail <== temp
                temp -> prev = tail;
            // temp should now be the tail of the list
            tail = temp;
            // for(DLNode *current = tail; tail == nullptr; current = current -> next){
            // current -> next = temp;
            // temp -> prev = tail;
            // tail = temp;
            // }
        }
    }

    // add a method print() that will traverse the list
        // and print all node values
        // if the list is empty, print "empty"
    void print(){
        // empty?
        if(head == nullptr){    
            cout << "Empty!" << endl;
            return;
        }
        // not empty
            for(DLNode *current = head; current != nullptr; current = current -> next){
                cout << current -> data << " ";
            }
            cout << "(done)" << endl;
    }

    // define a method popVal()
        // input: target value to remove
        // this method should remove the first node we find with the target value
            // from the list
        // EX: 1 2 3, popVal(2)
            // result: list should be 1 3
    void popVal(int target){
        // traverse the list to look for the target
        for(DLNode *current = head; current != nullptr; current = current -> next){
            // check if the current value is the target
            if(current->data == target){
                // we found it!
                // is the current location the head?
                if(current == head){
                    // is head the only node?
                    if(head == tail){
                        delete head;
                        head = tail = nullptr;
                        return;
                    }
                    // move head forward
                    head = head -> next;
                    delete current;
                    head -> prev = nullptr;
                    return;
                }
                else if(current == tail){
                    // dont need to repeat due to if head and tail = same node
                    tail = tail -> prev;
                    delete current;
                    tail -> next = nullptr;
                    return;
                }
                else{
                    // the value is somewhere in the middle
                    // current -> prev <==> current <==> current -> next
                    // link current -> prev ==> current -> next
                    current -> prev -> next = current -> next;
                    // link current -> prev <== current -> next
                    current -> next -> prev = current -> prev;
                    // delete the current node
                    delete current; 
                    return;
                }
            }
            
        }
    }
};