#include<iostream>
using namespace std;

//find the max sum of k consecutive element.

int maxSum(int arr[],int n, int k){
    //lets find the sum of first k elements
    int sum=0,res=0;
    for(int i=0;i<k;i++){
	sum+=arr[i];
    }
    res=sum;
    for(int i=k;i<n;i++){
	sum=sum+arr[i]-arr[i-k];
	res=max(sum,res);
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
    int k;
    puts("Enter k");
    cin>>k;
    cout<<"Max sum for k consecutive elements is "<<maxSum(arr,n,k)<<endl;
}
