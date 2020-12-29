#include<iostream>
#include"printArr.cpp"
#include <fstream>
using namespace std;

/*------------------------------------*/
/*Sort an array in O(n) with 3 types  */
/*of elements given.                  */
/*------------------------------------*/

//Dutch National Flag Algorithm.

void dutch(int *arr,int n){
    int lo=0,mid=0,hi=n;
    while(mid<hi){
	switch(arr[mid]){
	    case 0:{
		       cout<<"CASE: 0"<<endl;
		       cout<<"low: "<<lo<<" mid: "<<mid<<endl;
		       cout<<"arr[lo]: "<<arr[lo]<<" arr[mid]: "<<arr[mid]<<endl;
		       swap(arr[lo],arr[mid]);
		       lo++;
		       mid++;
		       cout<<"xxxxxxxxxxxxxxxxxx"<<endl;
		   }
		   break;
	    case 1:{
		       cout<<"CASE: 1"<<endl;
		       mid++;
		       cout<<"xxxxxxxxxxxxxxxxxx"<<endl;
		   }
		   break;
	    case 2:{
		       cout<<"CASE: 2"<<endl;
		       hi--;
		       cout<<"arr[hi] "<<arr[hi]<<" arr[mid] "<<arr[mid]<<endl;
		       swap(arr[mid],arr[hi]);
		       cout<<"xxxxxxxxxxxxxxxxxxxx"<<endl;
		   }
		   break;
	    default:cout<<"Wrong case"<<endl;
	}
    }
}
int main(){
    ifstream in("in.txt");
    if(in.is_open()){
	int n;
	in>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    in>>arr[i];
	    if(arr[i]>2){
		cout<<"Wrong Input range=[0,1,2]"<<endl;
		return 1;
	    }
	}
	cout<<"Arr is: "<<endl;
	printArr(arr,n);
	cout<<"Sorting...."<<endl;
	dutch(arr,n);
	printArr(arr,n);
    }
}
