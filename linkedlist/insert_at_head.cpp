#include<iostream>
#include "def.h"
using namespace std;

Node* insert(int x, Node* head){
    Node* tmp = new Node(x);
    if(head==NULL)
        return tmp;
    tmp->next = head;
    return tmp;
}

int main(){
    createList();
    head = insert(0,head);
    printList(head);
}
