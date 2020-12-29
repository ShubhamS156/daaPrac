#include<iostream>
#include<algorithm>
using namespace std;

/*
 * Distribute m chocolates such that diff of max  and min is minimised.
 */
//7 3 2 4 9 12 56
//2 3 4 7 9 12 56
int distribute(int *arr,int n,int m){
    sort(arr,arr+n);//sort the array
    //now for every ith and i+m-1th element we find their diff
    //and keep updating the minimum.
    int tmp=0,res=INT32_MAX;
    for(int i=0;i+m-1<n;i++){
	tmp=arr[i+m-1]-arr[i];
	cout<<"Diff is: "<<tmp<<endl;
	res=min(res,tmp);
	cout<<"Min: "<<res<<endl;
    }
    return res;
}
int main(){
    int arr[]={3,4,1,9,56,7,9,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=5;
    cout<<distribute(arr,n,m)<<endl;
}
