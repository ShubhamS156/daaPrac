#include<iostream>
using namespace std;

//find the max circular sub arr sum.
//overall array sum - min sub arr sum = max circual sub arr sum

//lets find the min sub array sum using kadne's algo

int minSum(int arr[],int n){
    int res=arr[0];
    int tmp=arr[0];
    for(int i=1;i<n;i++){
	tmp=min(tmp+arr[i],arr[i]);
	res=min(res,tmp);
    }
    return res;
}
int totalSum(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
	res+=arr[i];
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
    cout<<"min sum subarr "<<minSum(arr,n)<<endl;
    cout<<"max circular subarr sum "<<totalSum(arr,n)-minSum(arr,n)<<endl;

}
