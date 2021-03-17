#include<iostream>
#include"def.h"
using namespace std;

Node* nth(Node* head, int n){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && n--){
        fast = fast->next;
    }
    if(fast == NULL) //case where n is greater than length of list.
        return NULL;

    cout<<"Fast: "<<fast->data<<endl;
    while(fast!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main(){
    createList();
    cout<<"List: "<<endl;
    printList(head);
    int n = 4;
    Node* tmp = nth(head,n);
    cout<<n<<"th node from end: "<<tmp->data<<endl;
}
