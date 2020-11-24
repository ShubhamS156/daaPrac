#include<iostream>
using namespace std;

//count subset of given set that result to given sum.

int count(int arr[],int n,int sum){
    if(n==0){
	return sum==0?1:0;
    }
    return count(arr,n-1,sum)+count(arr,n-1,sum-arr[n-1]);
}
int main(){
    int arr[]={1,2,3};
    int n=3;
    cout<<count(arr,n,4)<<endl;
}
