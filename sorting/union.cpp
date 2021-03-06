#include<iostream>
#include"printArr.cpp"
#include<fstream>
using namespace std;

void unionOfArr(int *arr1,int n,int *arr2,int m){
    int i=0,j=0;
    while(i<n && j<m){
	if(i!=0 && arr1[i]==arr1[i-1]){
	    i++;
	    continue;
	}
	if(j!=0 && arr2[j]==arr2[j-1]){
	    j++;
	    continue;
	}
	if(arr1[i]<arr2[j]){
	    cout<<arr1[i++]<<" ";
	}
	else if(arr2[j]<arr1[i]){
	    cout<<arr2[j++]<<" ";
	}
	else{
	    cout<<arr1[i]<<" ";
	    i++;j++;
	}
    }
    while(i<n){
	cout<<arr1[i++]<<" ";
    }
    while(j<m){
	cout<<arr2[j++]<<" ";
    }
    cout<<endl;
}
int main(){
    ifstream in("in.txt");
    if(in.is_open()){
	int n,m;
	in>>n;
	in>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++){
	    in>>arr1[i];
	}
	for(int i=0;i<n;i++){
	    in>>arr2[i];
	}
	cout<<"arr1: "<<endl;
	printArr(arr1,n);
	cout<<"arr2: "<<endl;
	printArr(arr2,m);
	cout<<"Union: "<<endl;
	unionOfArr(arr1,n,arr2,m);
    }
}
