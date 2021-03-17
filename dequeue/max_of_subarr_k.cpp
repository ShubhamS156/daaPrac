#include<iostream>
#include<deque>
#include<vector>
using namespace std;

void maxOfSubArr(int arr[],int n,int k){
    deque<int> dq;
    vector<int> res;
    for(int i=0; i<k; i++){
        while(!dq.empty() && arr[dq.back()]<=arr[i]){
                dq.pop_back();
         }
        dq.push_back(i);
    }

    for(int i = k; i < n; i++){
        res.push_back(arr[dq.front()]);
        while(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()]<=arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);

    //function to print result;
    vector<int>::iterator it = res.begin();
    while(it!=res.end()){
        cout<<*it<<" ";
        it++;
    }
}
int main(){
    int arr[] = {20,8,5,12,15,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    maxOfSubArr(arr,n,k);
}
