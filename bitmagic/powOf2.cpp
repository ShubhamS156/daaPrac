#include<iostream>
using namespace std;

bool check(int n){
    //if the number is power of 2 then there will be only 1 set bit.
    if(n==0)
	return false;
    return (n&(n-1))==0;
}
int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    cout<<check(n);
}
