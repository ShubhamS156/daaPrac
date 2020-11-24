#include<iostream>
using namespace std;

//reverse an array

void reverse(int arr[],int n){
    for(int i=0;i<(n/2);i++){
	swap(arr[i],arr[n-1-i]);
    }
}
int main(){
    int arr[]={10,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Reversed: "<<endl;
    reverse(arr,n);
    for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
    }
    cout<<endl;
}
