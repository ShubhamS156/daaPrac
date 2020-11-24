#include<iostream>
using namespace std;

//find the max sub arr sum ...Kadane's Algo

int maxSum(int arr[],int n){
    int res=INT32_MIN;
    int sum=INT32_MIN;
    for(int i=0;i<n;i++){
	sum=max(sum+arr[i],arr[i]);
	res=max(res,sum);
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
    cout<<"Max subarr sum: "<<maxSum(arr,n)<<endl;
}
