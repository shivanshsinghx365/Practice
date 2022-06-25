#include <iostream>
using namespace std;

//this can be used for both doubly linked list and binary trees
struct node  //A Node is a structure that can be used for Doubly Linked list and binary tree
{
    int data;
    union {
        struct {  // this represents a binary tree node
            node *left, *right;
        };
        struct {  // this represents a doubly linked list node
            node *prev, *next;
        };
    };
};

int main(){
    return 0;
}