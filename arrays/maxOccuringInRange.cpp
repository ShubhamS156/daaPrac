#include<iostream>
using namespace std;

//given two arrays which depict ranges ,find the maximum occuring element.
void maxOccuring(int lo[],int hi[],int n){
    int prefix[100];
    for(int i=0;i<100;i++){
	prefix[i]=0;
    }
    for(int i=0;i<n;i++){
	prefix[lo[i]-1]++;
	prefix[hi[i]]--;
    }
    for(int i=1;i<100;i++){
	prefix[i]=prefix[i-1]+prefix[i];
    }
    cout<<"Freq array: "<<endl;
    for(int i=0;i<100;i++){
	cout<<prefix[i]<<" ";	
    }
    cout<<endl;
    int freq=0,index=0;
    for(int i=0;i<100;i++){
	if(prefix[i]>freq){
	    freq=prefix[i];
	    index=i;
	}
    }
    cout<<"Number: "<<index+1<<"\nFreq: "<<freq<<endl;
}
int main(){
    int n;
    cin>>n;
    int lo[n],hi[n];
    puts("Enter array lo:");
    for(int i=0;i<n;i++){
	cin>>lo[i];
    }
    puts("Enter array hi:");
    for(int i=0;i<n;i++){
	cin>>hi[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
	cout<<lo[i]<<" | ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
	cout<<hi[i]<<" | ";
    }
    cout<<endl;
    maxOccuring(lo,hi,n);
}
