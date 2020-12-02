#include<iostream>
#include <cassert>
#include<cstdio>
#include<fstream>

using namespace std;

//peak element is an element which is not smaller than its neighbours

int peakEl(int arr[],int n){
    int lo=0,hi=n-1,mid;
    int res;
    while(lo<=hi){
	mid=lo+(hi-lo)/2;
	if( (mid==0 && arr[mid+1]<arr[mid]) || (mid==n-1 && arr[mid]>arr[mid-1]) || (arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])){
	    return arr[mid];
	}
	else if(arr[mid]<arr[mid+1]){
	    lo=mid+1;
	    res=arr[mid+1];
	}
	else{
	    hi=mid-1;
	    res=arr[mid-1];
	}
    }
   return res;
}

int main(){
    ifstream in("in.txt");
    if(in.is_open()){
	    
	int n;
	in>>n;
	cout<<"size: "<<n<<endl;
	int arr[n];
	int i=0;
	while(in>>arr[i]){
		i++;
	}
	cout<<"Array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nPeak: "<<peakEl(arr,n)<<endl;
    }
    else{
	cout<<"No input file in.txt"<<endl;
    }
}
