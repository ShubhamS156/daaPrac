#include<iostream>
#include "merge_function.cpp" 
#include"printArr.cpp"
using namespace std;

void mergeSort(int arr[],int lo,int hi){
    if(lo<hi){
	int mid=lo+(hi-lo)/2;
	mergeSort(arr,lo,mid);
	mergeSort(arr,mid+1,hi);
	merge(arr,lo,mid,hi);
    }
}
int main(){
    int arr[]={3,4,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    printArr(arr,n);
}
