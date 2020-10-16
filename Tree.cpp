#include "Tree.h"

Tree :: Tree() {
    no_of_nodes = 0;
    ROOT = NULL;
}

bool Tree :: addEntryToTree(int val) {
    struct node *tPtr = ROOT;
    struct node *parent_of_Tptr = NULL;
    //The flag will be set if we move left
    bool flag;

    while(tPtr != NULL) {
        parent_of_Tptr = tPtr;
        left = 0;

        if(val <= tPtr->value) {
            tPtr = tPtr->left;
            left = 1;
        }
        else {
            tPtr = tPtr->right;
        }
    }
    tPtr = new struct node;
    if(NULL == tPtr) {
        cout<<"Unable to allocate memory"<<endl;
        return false;
    }
    //Adding value passed by user in the tree
    memset(tPtr,0,sizeof(struct node));
    tPtr->value = val;
    //Update the parent (if it exists) of the node
    if(parent_of_Tptr) {
        if(left) {
            parent_of_Tptr->left = tPtr;
        }
        else {
            parent_of_Tptr->right = tPtr;
        }
    }
    //update the total number of nodes
    ++no_of_nodes;

    return true;
}

bool Tree :: treeLookup(int val) {
    struct node *tPtr = ROOT;

    while(tPtr != NULL) {
        if(tPtr->value == val) {
            return true;
        }
        else if(val <= tPtr->value) {
            tPtr = tPtr->left;
        }
        else {
            tPtr = tPtr->right;
        }
    }
    return false;
}

bool Tree :: removeNodeFromTree(int val) {

}

Tree :: ~Tree() {
    delete ROOT;
    no_of_nodes = 0;
}