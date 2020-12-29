#include<iostream>
#include"printArr.cpp"
using namespace std;

/*-------------------------------------
 * Given a pivot we have to partition
 * the array such that elements smaller
 * than pivot are on left and greater
 * on right. 
 *------------------------------------*/

void naive(int* arr,int lo,int hi,int p){
    int tmp[hi-lo+1];
    int j=0;
    for(int i=0;i<=hi;i++){
	if(arr[i]<=arr[p]){
	   tmp[j]=arr[i];
	   j++; 
	}
    }
    
    for(int i=0;i<=hi;i++){
	if(arr[i]>arr[p]){
	   tmp[j]=arr[i];
	   j++; 
	}
    }
    for(int i=0;i<=hi;i++){
	arr[i]=tmp[i];
    } 
}
int main(){
    int arr[]={5,13,6,9,12,11,8};
    int n=sizeof(arr)/4;
    naive(arr,0,n-1,n-1);
    printArr(arr,n);
}
