#include"merge_function.h"

/*---------------------------*/
/*merge function of mergesort*/
/*---------------------------*/
void merge(int arr[],int lo,int mid,int hi){
    int n1=mid-lo+1,n2=hi-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
	left[i]=arr[lo+i];
    }
    for(int i=0;i<n2;i++){
	right[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=lo;
    while(i<n1 && j<n2){
	if(left[i]<=right[j]){
	    arr[k++]=left[i++];
	}
	else{
	    arr[k++]=right[j++];
	}
    }
    while(i<n1){
	arr[k++]=left[i++];
    }
    while(j<n2){
	arr[k++]=right[j++];
    }
}
