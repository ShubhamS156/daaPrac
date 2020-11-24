#include<iostream>
using namespace std;
//print first m n-bonnaci numbers

void bonnaci(int n,int m){
    int arr[m];
    for(int i=0;i<n-1;i++){
	arr[i]=0;
	cout<<arr[i]<<" ";
    }
    arr[n-1]=1;
    cout<<arr[n-1]<<" ";
    int sum=1;
    for(int i=0;i<(m-n);i++){
	arr[i+n]=sum;
	cout<<sum<<" ";
	sum=sum+arr[i+n]-arr[i];
    }
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    bonnaci(n,m);
   cout<<endl; 
}
