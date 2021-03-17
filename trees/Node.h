#include<iostream>
typedef struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key = x;
        right = left = NULL;
    }
}Node;

Node* newNode(int x){
    Node* node = new Node(x);
    return node;
}
