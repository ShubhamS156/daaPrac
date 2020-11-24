#include<iostream>
using namespace std;

//find the total water that can be stored in the given array which denotes length of 
//buildings.

int water(int arr[],int n){
    //rain water that can be stored at a pos i is min(lmax,rmax)-arr[i]
    //lets make lmax and rmax array.
    int lmax[n],rmax[n];
    int res=0;
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
	lmax[i]=max(lmax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
	rmax[i]=max(rmax[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++){
	res+= min(lmax[i],rmax[i])-arr[i];
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
	cin>>arr[i];
    }
    cout<<"water trapped: "<<water(arr,n)<<endl;
}
