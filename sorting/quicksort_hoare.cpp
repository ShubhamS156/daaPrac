
#include<iostream>
#include"printArr.cpp"
using namespace std;

int hoare(int *arr,int lo,int hi){
    int pivot=arr[lo];
    int i=lo-1,j=hi+1;
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


void quick_sort(int *arr,int lo,int hi){
    if(lo<hi){
	cout<<"Calling quicksort for "<<lo<<" to "<<hi<<endl;
	int p=hoare(arr,lo,hi);
	quick_sort(arr,lo,p);
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
