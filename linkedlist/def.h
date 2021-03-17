using namespace std;
typedef struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
}Node;

Node* head;
Node* n2;
Node* n3;
Node* n4;
Node* n5;

void createList(void){
    head = new Node(1);
    n2   = new Node(2);
    n3   = new Node(3);
    n4   = new Node(4);
    n5   = new Node(5);

    head->next = n2;
    n2->next   = n3;
    n3->next   = n4; 
    n4->next   = n5;
}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    } 
}
