#include<iostream>
using namespace std;
//find the frequencies of all elements in a sorted array

void freq(int arr[],int n){
    int i=0,j=1;
    while(j<n){
	while(j<n && arr[i]==arr[j]){
	    j++;
	}
	cout<<arr[i]<<" appears "<<j-i<<" times"<<endl;	
	i=j;
	j++;
    }
}
int main(){
 //   int arr[]={10,10,20,30,40,40,50,50,50};
    int arr[]={10,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    freq(arr,n);
}
