#include<iostream>
using namespace std;

bool check(int num,int k){
    //left shit 1 by k-1 places
    return num&(1<<k-1);
}

int main(){
    int n,k;
    cout<<"Enter Num"<<endl;
    cin>>n;
    cout<<"Enter K"<<endl;
    cin>>k;
    cout<<check(n,k)<<endl;
}
