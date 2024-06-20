#include <iostream>
using namespace std;

#include "LL.h"

int main(){
    // Create a linekd list of 3 nodes
        // 5 ==> 10 ==> 15
        // ^ head
    LLNode *head;
    head = new LLNode(5);
    head -> next = new LLNode(10);
    head -> next -> next = new LLNode(15);

    LinkedList myList;

    myList.head = head; // moved our list into a LinkedList object

    myList.print();

    myList.printLast();

    myList.findValue(10);

    // deletes a node
    LLNode *throwaway = new LLNode(4);
    delete throwaway;

    // delete the 15 by finding 10
    
    // myList.removeNext(5);
    // myList.print();
    myList.removeNext(10);
    myList.print();
}