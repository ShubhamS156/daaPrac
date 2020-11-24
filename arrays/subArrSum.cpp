#include<iostream>
using namespace std;
//find subarr indexes with given sum.
bool findSum(int arr[],int n,int sum){
    int tmp=0,j=0;
    for(int i=0;i<n;i++){
        tmp+=arr[i];
	if(tmp>sum){
	    while(tmp>sum){
		tmp-=arr[j++];
	    }
    	}
	if(tmp==sum)
	    return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
	cin>>arr[i];
    }
    puts("Enter sum");
    int sum=0;
    cin>>sum;
    cout<<findSum(arr,n,sum)<<endl;
}
