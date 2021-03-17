#include<iostream>
#include"def.h"
using namespace std;

/*
 * Find the intersection point of two linked list with some nodes being common.
 */

int intersection(Node* h1, Node* h2){
    int len1=0,len2=0;
    Node* curr = NULL;
    curr = h1;
    while(curr!=NULL){
        len1++;
    }
    curr = h2;
    while(curr!=NULL){
        len2++;
    }
    int int_point = abs(len1-len2)-1;
    curr = len1<len2?h2:h1;
}
int main(){
    
}
