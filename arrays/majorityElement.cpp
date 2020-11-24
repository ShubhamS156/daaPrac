#include<iostream>
using namespace std;

//majority element is an element that appears more than n/2 times.

int majority(int arr[],int n){
    int count=1;
    int candidate=arr[0];
    for(int i=1;i<n;i++){
	if(arr[i]==candidate){
	    count++;
	}
	else{
	    count--;
	    if(count==0){
		candidate=arr[i];
		count=1;
	    }
	}
    }
    //now check if candidate is really in majority
    int counter=0;
    for(int i=0;i<n;i++){
	if(arr[i]==candidate){
	    counter++;
	}
    }
    if(counter>n/2)
	return candidate;
    else 
	return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
	cin>>arr[i];
    }
    cout<<"Majority Element is: "<<majority(arr,n)<<endl;
}
