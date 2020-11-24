#include<iostream>
using namespace std;

//find the min flips to make array of same elements
//We'll find the min(count of groups of 1, groups of zero);
int minFlips(int arr[],int n){
    int counter=0;
    for(int i=1;i<n;i++){
	if(arr[i]!=arr[i-1]){
	    if(arr[i]!=arr[0]){
		cout<<"From "<<i<<" to ";
		counter++;
	    }
	    else{
		cout<<i-1<<" "<<endl;
	    }
	}
    }
    cout<<endl;
    return counter;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
	cin>>arr[i];
    }
    cout<<"Min Flips:\n "<<minFlips(arr,n)<<endl;
	
}
