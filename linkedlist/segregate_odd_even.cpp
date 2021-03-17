#include<iostream>
#include"def.h"
using namespace std;

Node* segregate(Node* head){
    Node* es=NULL, *ee=NULL, *os=NULL, *oe=NULL;
    for(Node* curr=head; curr!=NULL; curr = curr->next){
        int data = curr->data;
        if(data%2==0){
            if(es==NULL){
                es=curr;
                ee=curr;
            }
            else{
                ee->next = curr;
                ee = ee->next;
            }
        }
        else{
            if(os==NULL){
                os=curr;
                oe=curr;
            }
            else{
                oe->next = curr;
                oe = oe->next;
            }
        }
    }
    if(os==NULL || es==NULL)
        return head;
    ee->next = os;
    oe->next = NULL;
    return es;
}

int main(){
    createList();
    cout<<"Orignal List"<<endl;
    printList(head);
    cout<<"Segregating.."<<endl;
    printList(segregate(head));
}
