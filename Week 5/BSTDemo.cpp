#include<iostream>
using namespace std;

#include"BNode.h"

int main(){
    // create this tree
        // {4, 3, 6, 1, 5, 2}
    BSTNode *root = new BSTNode(4);
    root -> left = new BSTNode(3);
    root -> right = new BSTNode(6);
    root -> left -> left = new BSTNode(1);
    root -> right -> left = new BSTNode(5);
    root -> left -> left -> right = new BSTNode(2);
    print(root);

    printMax(root);
}