#include "Node.h"
using namespace std;

void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<endl;
        inorder(root->right);
    }
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    inorder(root);
}
