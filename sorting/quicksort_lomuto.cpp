#include<iostream>
#include"printArr.cpp"
using namespace std;


int lomuto(int *arr,int lo,int hi){
    int pivot=arr[hi];
    int j=0;
    for(int i=lo;i<=hi;i++){
	if(arr[i]<=pivot){
	    swap(arr[i],arr[j]);
	    cout<<"---> Swapped "<<arr[j]<<" and "<<arr[i]<<endl;
	    j++;
	}
    }
    return j-1; //index of the pivot element after readjutment.
}

void quick_sort(int *arr,int lo,int hi){
    if(lo<hi){
	cout<<"Calling quicksort for "<<lo<<" to "<<hi<<endl;
	int p=lomuto(arr,lo,hi);
	quick_sort(arr,lo,p-1);
	quick_sort(arr,p+1,hi);	
    }
}
int main(){
    int arr[]={8,4,7,9,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Orignal Array: ";
    printArr(arr,n);
    quick_sort(arr,0,n-1);
    cout<<"After Sorting: ";
    printArr(arr,n);
}
