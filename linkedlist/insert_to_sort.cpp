#include<iostream>
#include"def.h"
using namespace std;

Node* insert(Node* head, int x){
    if(head==NULL)
        return NULL;
   Node* curr = head;
   if(curr->data>x){
       Node* temp = new Node(x);
       temp->next = head;
       return temp;
   }
   else{
       while(curr->next!=NULL && curr->next->data < x){
       curr = curr->next;
       }
       Node* tmp = new Node(x);
       tmp->next = curr->next;
       curr->next = tmp;
   }
   return head;
}

int main(){
    createList();
    cout<<"CurrList: "<<endl;
    printList(head);
    printList(insert(head,0));
}
