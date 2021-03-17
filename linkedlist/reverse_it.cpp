#include<iostream>
#include"def.h"
using namespace std;

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* nextN= head->next;
    while(curr!=NULL){
        curr->next = prev;
        prev = curr;
        curr = nextN;
        if(nextN)
            nextN = curr->next;
    }
    return prev;
}

int main(){
    createList();
    cout<<"Print List:"<<endl;
    printList(head);
    cout<<"Reversing"<<endl;
    printList(reverse(head));
}
