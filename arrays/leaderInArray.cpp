#include<iostream>
using namespace std;

//leader is en element which does not have any element greater than it on the right
//side.

void leader(int arr[],int n){
    int index=n-1;
    for(int i=n-1;i>=0;i--){
	if(arr[i]>=arr[index]){
	    cout<<arr[i]<<" ";
	    index=i;
	}
    }
}
int main(){
    int arr[]={30,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Leader: ";
    leader(arr,n);
    cout<<endl;

}
