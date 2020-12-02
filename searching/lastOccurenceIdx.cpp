#include<iostream>
using namespace std;

//find the idx of the last occurence of a element in the given sorted arr

int  last(int arr[],int n,int x){
    int lo=0,hi=n-1,mid;
    while(lo<=hi){
	mid=lo+(hi-lo)/2;
	if(mid!=hi && arr[mid]==x && arr[mid+1]!=x){
	    return mid;
	}
	else if(mid==hi && arr[mid]==x){
	    return mid;
	}
	else if(arr[mid]>x){
	    hi=mid-1;
	}
	else{
	    lo=mid+1;
	}
    }
    return -1;
}
int main(){
    int arr[]={1,10,10,10,20,20,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<last(arr,n,1)<<endl;
}
