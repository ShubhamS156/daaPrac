#include<iostream>
#include<fstream>
#include<algorithm>
#include<utility>
using namespace std;

/*
 * Given arrival and departure times of some guests
 * Find the max number of guests you can meet by going
 * in a certain time interval.
 */

bool cmp(pair<int,int> p1,pair<int,int>p2 ){
    return p1.first<p2.first;
}
int max_guest(pair<int,int> *arr,int n){
    sort(arr,arr+n,cmp);
    int counter=1,res=1;
    pair<int,int> curr=arr[0];
    for(int i=1;i<n;i++){
	if(arr[i].first<=curr.second){
	    counter+=1;
	    res=max(res,counter);
	}
	else{
	    counter=1;
	}
	curr=arr[i];
    }
    return res;
}
int main(){
    ifstream in("in.txt");
    if(in.is_open()){
	int x;
	in>>x;
	int n=x/2;
	pair<int,int> arr[n];
	for(int i=0;i<n;i++){
	    in>>arr[i].first;
	    in>>arr[i].second;
	}
	cout<<"Timings Are: "<<endl;
	cout<<"-------------"<<endl;
	cout<<"Arr     Dep"<<endl;
	for(int i=0;i<n;i++){
	    cout<<"|"<<arr[i].first<<"     "<<arr[i].second<<"|"<<endl;
	}	
	cout<<"-------------"<<endl;
	cout<<"Max guests that you can meet are: "<<max_guest(arr,n)<<endl;
    }
}
