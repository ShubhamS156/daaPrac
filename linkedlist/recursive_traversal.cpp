#include<iostream>
#include "def.h"
using namespace std;

void recur(Node* head){
    if(head==NULL)
        return;
    cout<<head->data<<endl;
    recur(head->next);
}

int main(){
//    Node* head = new Node(14);
//   Node* n2 = new Node(15);
 //   Node* n3 = new Node(16);
  //  head->next = n2;
   // n2->next = n3;
    createList();
    recur(head);
}
