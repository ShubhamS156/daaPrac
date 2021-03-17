#include<iostream>
#include "def.h"
using namespace std;

Node* insert(int x, int pos, Node* head){
    if(head==NULL){
        return NULL;
    }
    if(pos == 1){
        Node* temp = new Node(x);
        temp->next = head;
        return temp;
    }
    int tmp = pos-2;
    Node* curr = head, *temp = NULL;
    while(tmp--){
        curr = curr->next;
        if(curr == NULL)
            return head;
    }
    temp = new Node(x);
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main(){
    createList();
    printList(insert(6,10,head));
}
