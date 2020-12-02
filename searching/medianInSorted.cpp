#include <cstdint>
#include<iostream>
#include<fstream>
using namespace std;
//find the median in a sorted array
//we divide the 2 arrays such that we have two points i1 and i2 and elements// before i1 and i2 are less than elements after i1 and i2.
//then if n1+n2 is even we find the avg of max(r1,r2) and min(i1,i2)
//r1=i1-1;r2-i2-1;
void printArr(int arr[],int n){
    cout<<"Size: "<<n<<endl;
    for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
    }
    cout<<endl;
}
float median(int a[],int n1,int b[],int n2){
    int lo=0,hi=n1;
    while(lo<=hi){
	int i1=lo+(hi-lo)/2;
	int i2=(n1+n2+1)/2-i1;
	int min1=(i1==n1)?INT32_MAX:a[i1];
	int max1=(i1==0)?INT32_MIN:a[i1-1];
	int min2=(i2==n2)?INT32_MAX:b[i2];
	int max2=(i2==0)?INT32_MIN:b[i2-1];
	if(max2<=min1 && max1<=min2){
	    if((n1+n2)%2==0){
		return (max(max1,max2)+min(min1,min2))/2.0;
	    }
	    else{
		return (float)max(max1,max2);
	    }
	}
	else if(max1>min2){
	    hi=i1-1;
	}
	else if(max2>min1){
	    lo=i1+1;
	}
    }
    return -1;
}
int main(){
    ifstream in("medianIN.txt");
    if(in.is_open()){
	int n1,n2;
	in>>n1>>n2;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++){
	    in>>a[i];
	}
	for(int i=0;i<n2;i++){
	    in>>b[i];
	}
	printArr(a,n1);
	printArr(b,n2);	
	cout<<"Median is: "<<median(a,n1,b,n2)<<endl;
    }   
    else{
	cout<<"No input file MedianIN.txt"<<endl;
    }

}
