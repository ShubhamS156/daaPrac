#include<iostream>
using namespace std;

//perform queries of type getSum(i,j) on a given array

int util(int arr[],int n,int i,int j){
    int preFix[n];
    preFix[0]=arr[0];
    for(int i=1;i<n;i++){
	preFix[i]=arr[i]+preFix[i-1];
    }
    if(i==0)
	return preFix[j];
    else
	return preFix[j]-preFix[i-1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
	cin>>arr[i];
    }
    puts("Enter i and j\nUsage: getSum(i,j)");
    int i,j;
    cin>>i>>j;
    cout<<"Sum is "<<util(arr,n,i,j)<<endl;
}
