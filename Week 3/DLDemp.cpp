#include<iostream>
using namespace std;

#include "DLNode.h"

int main(){
    // declare a new DLList
    DLList myList;
    // test the print() method for this list 
    myList.print();
    // add 3 values to the list with insertBack()
    myList.insertBack(1);
    myList.insertBack(2);
    myList.insertBack(3);
    // try print() one more time
    myList.print();
}