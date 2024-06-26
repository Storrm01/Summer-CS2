#include<iostream>
using namespace std;

#include"DLNode.h"

int main(){
    // use dunamic allocation to create a new DLNode with value 5
    DLNode *head = new DLNode(5);
    // create this list using only "head" pointer
        // 5 ==> 10 ==> 15
    head -> next = new DLNode(10);
    head -> next -> next = new DLNode(15);
    // create this list using only "head" pointer
        // 5 <==> 10 <==> 15
    head -> next -> prev = head;
    head -> next -> next -> prev = head -> next;
    head -> prev = nullptr;

    // remove the 10 node
        // STEP 1: make a temp pointer to the 10 node, so we don't lose it
    DLNode *temp = head -> next;
        // STEP 2: link 5 ==> 15
    head -> next = head -> next -> next;
        // STEP 3: link 5 <== 15
    head -> next -> prev = head;
        // STEP 4: (optional) make the 10's links nullptrs
    temp -> next = nullptr;
    temp -> prev = nullptr;
        // Can delete the temp pointer to 10 as it does nothing and could create memory leak
    // delete temp;

    // print the list starting from head
    for(DLNode *current = head; current != nullptr; current = current -> next){
        cout << current -> data << " ";
    }
    cout << "(done)" << endl;

    // print the list in reverse
    for(DLNode *current = head -> next; current != nullptr; current = current -> prev){
        cout << current -> data << " ";
    }
    cout << "(done)" << endl;

    // take the 10, and link it before the 5
        // STEP 1: Put the prev of head equal to temp pointer(10) instead of nullptr
    head -> prev = temp; 
        // STEP 2: Place the connection from the temp => head 
    temp -> next = head;
        // STEP 3: Make 10 (aka "temp") the head
    head = temp;  
        // Can delete the temp here again as we dont need it anymore  
    // delete temp;
    // make 10 the head of the list
    
        // print the list starting from head
    for(DLNode *current = head; current != nullptr; current = current -> next){
        cout << current -> data << " ";
    }
    cout << "(done)" << endl;

    // print the list in reverse
    for(DLNode *current = head -> next -> next; current != nullptr; current = current -> prev){
        cout << current -> data << " ";
    }
    cout << "(done)" << endl;

    DLNode *head2 = new DLNode(1);
    DLNode *tail2 = new DLNode(4);
    head2 -> next = new DLNode(3);
    head2 -> next -> prev = head2;
    tail2 -> prev = new DLNode(2);
    tail2 -> prev -> next = tail2;
    head2 -> next -> next = tail2 -> prev;
    tail2 -> prev -> prev = head2 -> next;

    // TASK: Reorder the nodes so that they are in order
        // 1(head2) <==> 2 <==> 3 <==> 4(tail2)
    // DLNode *temp2 = head -> next; // goes to the 3
    // temp2 = head -> next -> next; // 
    
    
}