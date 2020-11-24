#include<iostream>
using namespace std;

//remove duplicates from a sorted array and return the new size.

int remove(int arr[],int n){
    int res=1;//ans will always be atleast 1.
    for(int i=1;i<n;i++){
	if(arr[i]!=arr[res-1]){
	    arr[res]=arr[i];
	    res++;
	}
    }
    return res;
}
int main(){
    int arr[]={1,1,2,2,3,3,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"size: "<<remove(arr,n)<<endl;

}
