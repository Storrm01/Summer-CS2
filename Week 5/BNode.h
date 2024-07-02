#include<iostream>
using namespace std;

class BSTNode{
    public:
        int data;
        BSTNode *left, *right;

        BSTNode(int d){
            data = d;
            left = nullptr;
            right = nullptr;
        }
};

class BST{
    public:
        BSTNode *root;

            // YOUR PRACICE
            // implement an insert() method here

};

            // define a function print() to print all values in the tree
             void print(BSTNode *root){
                // recursibely, as you requested
                // BASE CASE
                    // the tree is empty, or there is one node only
                if(root == nullptr){
                    cout << endl;
                    return; // we are done!
                }
                // RECURSIVE CASE
                else{
                    // print the current node (root)
                    cout << root -> data << " ";
                    // print everything on the left
                    print(root->left);
                    // print everything on the right
                    print (root->right);
                }
            }

// define a function printMAX() to print the largest
    // value in the tree
// algorithm:
    // 
void printMax(BSTNode *root){
    if(root == nullptr){
        return;
    }
    else if(root -> right == nullptr){
        cout << "The largest value is: ";
        cout << root -> data << endl;
    }
    else{
        printMax(root->right);
    }
}


// DESCRIBE an alogrithm to determine if a value is in a BST
    // input: pointer to the root node, the target value
    // return: true (if value is present), false otherwise
bool findVal(BSTNode *root, int target){
    if(root == nullptr){
        return false;
    }
    else if(root -> data == target){
        return true;
    }
    else{
        if(root -> data > target){
            // move left
            return findVal(root -> left, target);
        }
        else{
            // move right
            return findVal(root -> right, target);
        }
    }
}

bool findValR(BSTNode *root, int target){
    BSTNode *current = root;
    while(current != nullptr){
        if(current -> data == target){
            return true;
        }
        else if(current -> data > target){
            current = current -> left;
        }
        else{
            current = current -> right;
        }
    }
    return false; // we should only reach this if we never found it
}

// DESCRIBE and IMPLEMENT
    // an algorithm that will count the number of values
        // below zero in a tree
        // input: pointer to the root node
        // return: number of values below zero

// start at root node
    // start a count to keep track negatives (at zero)
    // check if value at current node is negative
        // we found 1 negative value! add to the count
        // everything on the left must also be negative
            // we need to check these
        // some things on the right might be negative
            // we need to check these
        // if the current value is not negative
            // we didn't find one
            // we still need to check on the left

int findNeg(BSTNode *root){
    // BASE CASE
        // what if there is nothing here?
    if(root == nullptr){
        return 0;
    }
    // RECURSIVE CASE
        // if the value negative
    else if(root -> data < 0){
            // yes 
        // we need to count this node
        return 1 + findNeg(root -> left) + findNeg(root -> right);
    }
    else{
            // no
        return findNeg(root -> left);
    }
}

// DESCRIBE and IMPLEMENT
    // count all nodes in a tree (size)
    // input: pointer to the root node
    // returns: the number of nodes(total)

int treeSize(BSTNode *root){
    // BASE CASE
        // there are no nodes
    if(root == nullptr){
        return 0;
    }
    // RECURSIVE CASE
        // there is a node
            // do one step (count) and call function for the rest
            // this node (1) + allOnLeft and allOnRight
    else{
        return 1 + treeSize(root -> left) + treeSize(root -> right);
    }
}

