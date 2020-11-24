#include<iostream>
using namespace std;
//find the max diff in the given array..it is max(arr[j]-arr[i]) such that j>i.

int maxDiff(int arr[],int n){
    int minVal=INT32_MAX;
    int res=INT32_MIN;
    int j=1;
    for(int i=0;i<n;i++){
	if(arr[i]<minVal)
	    minVal=arr[i];
	res=max(res,arr[j]-minVal);
	j++;
    }
    return res;
}
int main(){
    int arr[]={30,10,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Max Diff: "<<maxDiff(arr,n)<<endl;
}
