#include<iostream>
#include"def2.h"
using namespace std;

dNode* reverse_list(dNode* head){
    if(head==NULL || head->next==NULL)
        return head;

    dNode* curr=head, *prev=NULL, *nextN=head->next;
    while(curr!=NULL){
        curr->prev = nextN;
        curr->next = prev;
        prev = curr;
        curr = nextN;
        if(nextN!=NULL)
            nextN = nextN->next;
    }
    return prev;
}
int main(){
    createListD();
    cout<<"List: "<<endl;
    printListD(dhead);
    cout<<"Reversing..."<<endl;
    printListD(reverse_list(dhead));
}
