#include<iostream>
using namespace std;

//left rotate an array by d, here d=1.
void print(int arr[],int n){
    for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
    cout<<endl;
}
void reverse(int arr[],int n,int lo,int hi){
    for(int i=0;i<(hi-lo+1)/2;i++){
	swap(arr[lo+i],arr[hi-i]);
    }    
}
void rotate(int arr[],int n,int d){
    reverse(arr,n,0,d-1);
    reverse(arr,n,d,n-1);
    reverse(arr,n,0,n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before "<<endl;
    print(arr,n);
    cout<<"Array after "<<endl;
    rotate(arr,n,2); 
    print(arr,n);
}
