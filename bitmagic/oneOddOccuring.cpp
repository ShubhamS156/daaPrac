#include<iostream>
using namespace std;

int oddOccur(int arr[],int n){
    int tmp=0;
    for(int i=0;i<n;i++){
	tmp=tmp^arr[i];
    }
    return tmp;
}
int main(){
    int arr[]={1,1,1,1,2,2,3,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Odd Occuring: "<<oddOccur(arr,n)<<endl;

}
