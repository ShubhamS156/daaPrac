#include<iostream>
using namespace std;

void twoOdd(int arr[],int n){
    int tmp=0;
    for(int i=0;i<n;i++)
	tmp=tmp^arr[i];
    int res[2]={tmp,tmp}; 
    int last=(tmp&(~(tmp-1))); //last = last set bit of tmp

    for(int i=0;i<n;i++){
	if((last&arr[i])==0){
	    res[0]=res[0]^arr[i];
	}
	else{
	    res[1]=res[1]^arr[i];
	}
    }
    cout<<"Odd Occuring are "<<res[0]<<" "<<res[1]<<endl;
}

int main(){
    int arr[]={1,1,3,3,4,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    twoOdd(arr,n);
}
