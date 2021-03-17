#include<iostream>
#include"def.h"
using namespace std;

Node* it_search(Node* head, int query, int* pos){
    if(head == NULL)
        return NULL;
    Node* curr = head;
    while(curr!=NULL){
        *pos+=1;
        if(curr->data == query){
            return curr; 
        }
    }
    return NULL;
}
int rec_search(Node* head, int query){
    if(head==NULL)
        return -1;
    if(head->data == query)
        return 1;
    int res = rec_search(head->next, query);
    if(res==-1)
        return res;
    return res+1;
}

int main(){
    int query,pos=0;
    createList();
    cout<<"List is: ";
    printList(head);
    cout<<"Enter query"<<endl;
    cin>>query;
    Node* res_it = it_search(head, query, &pos);
    cout<<"Pos: "<<rec_search(head,query)<<endl;
    cout<<"Val: "<<res_it->data<<endl;
}
