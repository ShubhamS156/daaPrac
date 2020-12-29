#include<iostream>
using namespace std;

/*------------------------------------
 * Find the kTh smallest element.
 * We use lamuto partition to fix 
 * elements when the kth element
 * is fixed return the element at that
 * place.
 * ----------------------------------*/
// 10 5 30 12
int lamuto(int *arr,int lo,int hi){
    int pivot=arr[hi];
    int j=lo;
    for(int i=lo;i<=hi;i++){
	if(arr[i]<=pivot){
	    swap(arr[i],arr[j]);
	    j++;
	}	
    }
    return j-1;
}
int kth_smallest(int *arr,int n,int k){
    if(k>n)
	return -1;
    int index_kth=k-1;
    int lo=0,hi=n-1,tmp;
    while(lo<=hi){
	tmp=lamuto(arr,lo,hi);	
	if(tmp==index_kth){
	    return arr[tmp];
	}
	else if(tmp<index_kth){
	    lo=tmp+1;
	}
	else{
	    hi=tmp-1;
	}
    }
    return -1;
}
int main(){
    int arr[]={10,5,30,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<kth_smallest(arr,n,k)<<endl;
}
