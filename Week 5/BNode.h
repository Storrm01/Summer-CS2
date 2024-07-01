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