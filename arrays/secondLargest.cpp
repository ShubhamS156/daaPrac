#include<iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int first=arr[0],second=-1;
    for(int i=1;i<n;i++){
	if(arr[i]>first){
	    first=arr[i];
	}
	if(arr[i]<first && arr[i]>second){
	    second=arr[i];
	}
    }
    return second;
}
int main(){
    int arr[]={20,10,20,8,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Second Largest is "<<secondLargest(arr,n)<<endl;
}
