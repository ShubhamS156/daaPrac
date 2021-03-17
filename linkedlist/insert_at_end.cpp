#include<iostream>
#include "def.h"
using namespace std;

Node* insert(int x, Node* head){

    Node* tmp = new Node(x);

    if(head==NULL)
        return tmp;
   
    Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = tmp;
    return head;
}

int main(){
    createList();
    head = insert(6,head);
    printList(head);
}
