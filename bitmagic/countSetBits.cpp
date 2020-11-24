#include<iostream>
using namespace std;

int naive(int num){
    //check the last bit if 1 increment then remove the last bit.
    int counter=0;
    while(num!=0){
	if(num%2!=0)
	    counter++;
	num=num/2;
    }
    return counter;
}

int brian(int n){
    //brian kerringham's algo ..unsets the last set bit
    int counter=0;
    while(n!=0){
	n=n&(n-1);
	counter++;
    }
    return counter;
}
//lookup table method
//table[i]=i&1 + table[i/2];
int main(){
    int num;
    cout<<"Enter Num"<<endl;
    cin>>num;
    cout<<naive(num)<<"  "<<brian(num)<<endl;
}
