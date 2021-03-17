#include<iostream>
using namespace std;
typedef struct dNode{
    int data;
    dNode* next;
    dNode* prev;
    dNode(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
}Node;

dNode* dhead, *n1, *n2, *n3, *n4;

void createListD(void){
    dhead = new dNode(1);
    n1   = new dNode(2);
    n2   = new dNode(3);
    n3   = new dNode(5);
    n4   = new dNode(6);

    dhead->next = n1;

    n1->prev   = dhead;
    n1->next   = n2;

    n2->prev   = n1;
    n2->next   = n3;

    n3->prev   = n2;
    n3->next   = n4;

    n4->prev   = n3;
}
void printListD(dNode* head){
    if(head==NULL)
        return;
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
