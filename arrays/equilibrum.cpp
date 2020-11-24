#include<iostream>
using namespace std;

//point before which sum is equal to the sum of elements after it.

//1 2 -2
int equilib(int arr[],int n){
//lets make prefix array
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
	prefix[i]=arr[i]+prefix[i-1];
    }
    //3 4 8 -9 20 6
    //3 7 15 6 26 32
    int lsum=0,rsum=0;
    if(lsum==arr[n-1]) //check for first element of array
	return arr[0];
    for(int i=1;i<n;i++){
	rsum=arr[n-1]-arr[i];
	lsum=arr[i-1];

    }
}
