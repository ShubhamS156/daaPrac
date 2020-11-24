#include<iostream>
using namespace std;

//find the sum of digits of a number using recursion.

int sum(int n){
    if(n==0)
	return 0;
    return n%10+sum(n/10);
}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<<"Sum of digits: "<<sum(n)<<endl;
}
