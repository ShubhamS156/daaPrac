#include<iostream>
using namespace std;

int main(){
    int arr[]={10,2,57,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=arr[0];
    for(int i=1;i<n;i++){
	if(res<arr[i])
	    res=arr[i];
    }
    cout<<"Larget is "<<res<<endl;
}
