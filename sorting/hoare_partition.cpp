#include<iostream>
#include"printArr.cpp"
using namespace std;

int hoare(int *arr,int n){
    int i=-1,j=n;
    int pivot=arr[0];//taking first element as pivot
    while(1){
	do{
	    i++;
	}while(arr[i]<pivot);

	do{
	    j--;
	}while(arr[j]>pivot);

	if(i>=j){
	    break;
	}
	swap(arr[i],arr[j]);
    }
    return j;
}
int main(){
    int arr[]={8,6,4,9,12,5,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=hoare(arr,n);
    printArr(arr,n); 
    cout<<"Index: "<<index<<endl;
}
