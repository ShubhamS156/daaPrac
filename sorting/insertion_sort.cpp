#include<iostream>
using namespace std;
/*-------------------------*/
/* while there are numbers
 * greater than current move
 * them one place fwd.
 * ------------------------*/
void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort(int *arr,int n){
    int key,j;
    for(int i=1;i<n;i++){
	key=arr[i];
	j=i-1;
	cout<<"Key: "<<key<<endl;
	while(j>=0 && arr[j]>key){
	    cout<<"Moving "<<arr[j]<<" fwd..."<<endl;
	    arr[j+1]=arr[j];
	    j--;
	}	
	arr[j+1]=key;
	printArr(arr,n);
    }    
}
int main(){
    int arr[]={3,2,5,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
}
