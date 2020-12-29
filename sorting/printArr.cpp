#include<iostream>
#include"printArr.h"
using namespace std;
void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
    }
    cout<<endl;
}
