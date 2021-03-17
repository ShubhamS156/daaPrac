#include<iostream>
#include<queue>
using namespace std;

void reverse_queue(queue<int>& q){
    if(q.empty()){
        cout<<"empty queue"<<endl;
        return;
    }
    int x = q.front();
    q.pop();
    reverse_queue(q);
    q.push(x);
    cout<<"---pushed-->"<<x<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    reverse_queue(q);
    cout<<"After Reversing..."<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}
