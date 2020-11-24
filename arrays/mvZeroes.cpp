#include<iostream>
using namespace std;
//move all zeroes to emd while maintaing order of the array

void mv(int arr[],int n){
	    int z=0,i=0;
    while(z<n && i<n){
	while(arr[z]!=0){
	    z++;
	}
	i=z+1;
	while(i<n && arr[i]==0)
	    i++;
	    
	if(i<n){
		cout<<"Swapping "<<arr[i]<<" and "<<arr[z]<<endl;
		swap(arr[i],arr[z]);
	}
}
}

int main(){
    int arr[]={1,0,2,0,3,0,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Orignal arr"<<endl;
    for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
    }
    cout<<endl;
    mv(arr,n);
    cout<<"Modified arr"<<endl;
    for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
    }
    cout<<endl;

}
