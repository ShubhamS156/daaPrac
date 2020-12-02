#include<iostream>
using namespace std;

//find the square root of given element if not perfect square then return
//the element of the closest lower element.

int root(int x){
    int lo=0,hi=x-1,mid;
    int res=0;
    while(lo<=hi){
	mid=lo+(hi-lo)/2;
	if(mid*mid==x){
	    return mid;
	}
	else if(mid*mid<x){
	    res=mid;
	    lo=mid+1;
	}
	else{
	    hi=mid-1;
	}
    }
    return res;
}
int main(){
    int x;
    cin>>x;
    cout<<"Square root: "<<root(x)<<endl;
}
