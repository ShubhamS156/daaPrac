#include<iostream>
#include"printArr.cpp"
using namespace std;

int lamuto(int *arr,int hi,int pivot){
    int j=0;
    for(int i=0;i<=hi;i++){
	if(arr[i]<=arr[pivot]){
	    swap(arr[i],arr[j]);
	    j++;
	}
    }
    return j;
}
int main(){
    int arr[]={15,13,6,9,1,2,11,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArr(arr,n);
    cout<<"Index: "<<lamuto(arr,n-1,n-1)<<endl;
    printArr(arr,n);
}
