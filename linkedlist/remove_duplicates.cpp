#include<iostream>
#include"def.h"
using namespace std;

Node* remove(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* curr = head;
    Node* newHead = NULL;
    bool firstPass = true;

    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node* tmp = curr->next;
            curr->next = curr->next->next;
            delete(tmp);
        }
        else{
            if(firstPass){
                newHead = curr;
                firstPass = false;
            }
            curr = curr->next;
        }
    }
    return newHead;
}
int main(){
    createList();
    cout<<"List: "<<endl;
    printList(head);
    cout<<"Removing dups:"<<endl;
    printList(remove(head));
}
