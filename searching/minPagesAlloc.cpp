#include<iostream>
#include<fstream>
using namespace std;

//find the min(max pages a student out of k student reads)

//lets find the max element of the array and its sum
int max(int arr[],int n,int *sum){
    int res=INT32_MIN;
    for(int i=0;i<n;i++){
	*sum=(*sum)+arr[i];
	if(res<arr[i]){
	    res=arr[i];
	}
    }
    return res;
}

bool isFeasible(int arr[],int n,int k,int sum){
    int k2=1,tmp=0;
    for(int i=0;i<n;i++){
	if(tmp+arr[i]>sum){
	    tmp=arr[i];
	    k2+=1;
	}
	else{
	    tmp+=arr[i];
	}
    }
    return k2<=k;
}
int minPages(int arr[],int n,int k){
    int sum=0,res;
    int lo=max(arr,n,&sum),hi=sum,mid;
    while(lo<=hi){
	mid=lo+(hi-lo)/2;
	if(isFeasible(arr,n,k,mid)){
	    res=mid;
	    hi=mid-1;
	}
	else{
	    lo=mid+1;
	}
    }
    cout<<"lo: "<<lo<<" hi: "<<hi<<" mid: "<<mid<<" "<<endl;
    return res;
}
int main(){
    ifstream in("in.txt");
    if(in.is_open()){
	int n,k;
	in>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    in>>arr[i];
	}
	puts("Enter k");
	cin>>k;	
	cout<<"Min Pages: "<<minPages(arr,n,k)<<endl;
    }    
    else{
	cout<<"no input file found..."<<endl;
    }
}
