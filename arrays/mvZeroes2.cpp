#include<iostream>
using namespace std;
//move zeroes to the end

void mv(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
	if(arr[i]!=0){
	    swap(arr[i],arr[count]);
	    count++;
	}
    }
}
int main(){
    int arr[]={1,0,2,0,3,4,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    mv(arr,n);
    cout<<"Arr: "<<endl;
    for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
    cout<<endl;
}
