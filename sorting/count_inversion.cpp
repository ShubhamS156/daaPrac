#include<iostream>
using namespace std;

/* pair (arr[i],arr[j]) forms an inversion
 * if arr[i]>arr[j] and i<j.
 */

int insertion_sort(int *arr,int n){
    int counter=0;
    for(int i=1;i<n;i++){
	int j=i-1;
	int key=arr[i];
	while(j>=0 && arr[j]>key){
	    counter++;
	    arr[j+1]=arr[j];
	    j--;
	}
	arr[j+1]=key;
    }
    return counter;
}
int main(){
    int arr[]={4,3,2,1};
    int n=sizeof(arr)/4;
    cout<<"Inversions: "<<endl;
    cout<<insertion_sort(arr,n)<<endl;
}
