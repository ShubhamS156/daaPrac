#include<iostream>
#include"def.h"
using namespace std;

Node* reverse(Node* curr,Node* prev){
    if(curr==NULL){
        return prev;
    } 
    Node* nextN = curr->next;
    curr->next = prev;
    return reverse(nextN,curr);
}
int main(){
    createList();
    cout<<"List:"<<endl;
    printList(head);
    cout<<"Reversing:"<<endl;
    printList(reverse(head,NULL));
}
