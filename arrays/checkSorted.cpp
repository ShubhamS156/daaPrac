#include<iostream>
using namespace std;

//check if an array is sorted in increasing order.

bool check(int arr[],int n){
    for(int i=1;i<n;i++){
	if(arr[i]<arr[i-1])
	    return false;
    }
    return true;
}
int main(){
    int arr[]={1,2,30,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<check(arr,n)<<endl;
}
