#include<iostream>
#include"printArr.cpp"
#include<fstream>
using namespace std;

/*
 * Does minimum memory writes.
 * InPlace
 * Not Stable
 */
void cycle_sort(int *arr,int n){
    for(int cs=0;cs<n;cs++){
	int item=arr[cs];
	int pos=cs;
	for(int i=cs+1;i<n;i++){
	    if(arr[i]<item)
		pos++;
	}
	swap(item,arr[pos]);
	while(pos!=cs){
	    pos=cs;
	    for(int i=cs+1;i<n;i++){
		if(arr[i]<item){
		    pos++;
		}
	    }
	    swap(item,arr[pos]);
	}
    }
}
int main(){
    ifstream in("in.txt");
    if(in.is_open()){
	int n;
	in>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    in>>arr[i];
	}
	cout<<"Arr is:"<<endl;
	printArr(arr,n);
	cout<<"Sorting"<<endl;
	cycle_sort(arr,n);
	printArr(arr,n);
    }    
}
