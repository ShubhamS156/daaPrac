#include<iostream>
#include"printArr.cpp"
using namespace std;
/*
 * segregate odd and even elements
 */
void seg(int *arr,int n){
    int j=0;
    for(int i=0;i<n;i++){
	if(arr[i]%2==0){
	    swap(arr[i],arr[j]);
	    j++;
	}
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before: "<<endl;
    printArr(arr,n);
    seg(arr,n);
    cout<<"After: "<<endl;
    printArr(arr,n);
}

