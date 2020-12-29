#include<iostream>
#include<cstring>
#include<fstream>
#include"printArr.cpp"
using namespace std;
/*
 * count sort counts the occurences of all elements in the range 
 * 0,k-1 in an intresting way.
 */

void count_sort(int *arr,int n,int k){
    int output[n],count[k];
    for(int i=0;i<k;i++){
	count[i]=0;
    }
    //building count array
    for(int i=0;i<n;i++){
	count[arr[i]]+=1;
    }
    //taking prefix sum
    for(int i=1;i<k;i++){
	count[i]+=count[i-1];
    }
    //now count[i] represents elements smaller or equal to i.
    for(int i=n-1;i>=0;i--){
	output[count[arr[i]]-1]=arr[i];
	count[arr[i]]--;
    }
    for(int i=0;i<n;i++){
    	arr[i]=output[i];
    }
}
int main(){
    ifstream in("in.txt");
    if(in.is_open()){
	int n,k;
	in>>n;
	in>>k;
	int arr[n];
	for(int i=0;i<n;i++){
	    in>>arr[i];
	}
	cout<<"Arr is:"<<endl;
	printArr(arr,n);
	cout<<"Sorting using Count Sort..."<<endl;
	count_sort(arr,n,k);
	printArr(arr,n);
    }
}

