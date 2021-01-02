#include<iostream>
#include<unordered_set>
#include<fstream>
#include"driver.h"
/*
 * SIGNATURE of DRIVER_CODE
 * (file,function pointer,data(if necessary))
 */
using namespace std;

int pairWithGivenSum(int *arr,int n,int sum){
    unordered_set<int> hash(arr,arr+n);
    unordered_set<int>::iterator it=hash.begin();
    while(it!=hash.end()){
        if(hash.find(sum-*it)!=hash.end()){
            return 1;
        }
        else{
            it++;
        }
    }
    return 0;
}
int main(){
    int sum=12;
    int(*func_ptr)(int*,int,int);
    func_ptr=&pairWithGivenSum;
    DRIVER_CODE("in.txt",func_ptr,sum);
}
