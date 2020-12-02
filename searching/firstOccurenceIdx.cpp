#include<iostream>
using namespace std;

//find the idx of the first occurence of the given element x.
//the given array is sorted

int first(int arr[],int n,int x){
//we'll do binary search for the element x.
int lo=0,hi=n-1,mid=lo+(hi-lo)/2;
while(lo<=hi){
	mid=lo+(hi-lo)/2;
	if(mid!=lo && arr[mid]==x && arr[mid-1]!=x){
	    return mid;
	}
	else if(mid==lo && arr[mid]==x){
	   return mid; 
	}
	else if(arr[mid]<x){
	    lo=mid+1;
	}
	else{
	    hi=mid-1;
	}

    }
return -1;
}
int main(){
    int arr[]={1,10,10,10,20,20,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<first(arr,n,11)<<endl;
}
