#include<iostream>
using namespace std;

//find max consecutive ones.

int maxOnes(int arr[],int n){
    int tmp=0,res=0;
    for(int i=0;i<n;i++){
	if(arr[i]==1)
	    tmp++;
	else{
	    res=max(res,tmp);
	    tmp=0;
	}
    }
    res=max(res,tmp);//when all ones in array
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
	cin>>arr[i];
    }
    cout<<"Max consecutive ones: "<<maxOnes(arr,n)<<endl;
}
