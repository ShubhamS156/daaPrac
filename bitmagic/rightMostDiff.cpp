#include<iostream>
using namespace std;

int posOfRightMostDiffBit(int m, int n)
{
    //extract first bit from right from each number and compare 
    if(m==n){
        return -1;
    }
    int pos=1;
    while(m!=0 && n!=0){
        int a=(m&1);
        int b=(n&1);
        if(a!=b){
	    cout<<"not same"<<endl;
            return pos;
        }
        else{
	    cout<<"same"<<endl;
            m=m/2;
            n=n/2;
            pos++;
        }
    }
    return -2;
}
int main(){
   cout<<posOfRightMostDiffBit(8,0)<<endl;
}
