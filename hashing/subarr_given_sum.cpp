#include<iostream>
#include<unordered_set>
#include"driver.h"

/*
 * Find if there exists a subarr in the arr which sums to the given sum.
 * e.g. 5 8 6 13 3 -1 Sum=22
 * Result: True (6,13,3)
 * Similar to the prev problem. Build the prefix array. For every element in prefix arr
 * check if element+sum exists in the prefix array
 */

int check(int* arr,int n,int data){
    int sum=data;
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    cout<<"Prefix Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    unordered_set<int> hash(prefix,prefix+n);
    unordered_set<int>::iterator it=hash.begin();
    while(it!=hash.end()){
        if(hash.find(*it+sum)!=hash.end()){
            return 1;
        }
        else{
            it++;
        }
    }
    return 0;
}
int main(){
    int sum=22;
    int(*func_ptr)(int*,int,int);
    func_ptr=&check;
    DRIVER_CODE("in.txt",func_ptr,sum)
}
