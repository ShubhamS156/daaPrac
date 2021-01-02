#include<iostream>
#include"driver.h"
#include<unordered_set>

/*
 * Check efficiently if a subarray sums up to 0.
 * E.g -3 4 -3 -1 1
 * Result: True (4,-3,-1) or (-1,1)
 *
 * Prefix Sum arr: -3 1 -2 -3 -2
 *
 * If a subarray sums upto 0 then basically we are adding 0 to the prefix sum till
 * starting of the subarr hence the prefix sum after the end of resultant subarr will 
 * be the same.
 */

int check(int*arr,int n,int data){
    //data not req for this problem.
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    unordered_set<int> hash;
    for(int i=0;i<n;i++){
        if(hash.find(arr[i])!=hash.end()){
            return 1;
        }
        else{
            hash.insert(arr[i]);
        }
    }
    return 0;
}
int main(){
    int(*func_ptr)(int*,int,int);
    func_ptr=&check;
    DRIVER_CODE("in.txt",func_ptr,0)
}
