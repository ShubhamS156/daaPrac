#include<iostream>
using namespace std;

//find the longest subarr with alternating odd even number.

int longest(int arr[],int n){
    int tmp=1,res=1;
    for(int i=0;i<n-1;i++){
	if((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0)){
	    tmp++;
	    res=max(res,tmp);
	}
	else{
	    tmp=1;
	}
    }    
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
	cin>>arr[i];
    }
    cout<<"max alternating odd even: "<<longest(arr,n)<<endl;
}
