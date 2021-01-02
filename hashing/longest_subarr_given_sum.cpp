#include<iostream>
#include<unordered_map>
#include"driver.h"

/*
 * IDEA: store the first occurence of every prefix sum
 */
int count(int* arr,int n,int data){
    int sum=data;
    int prefix=0,res=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        if(prefix==sum){
            res=max(res,i+1);
        }
        else if(mp.find(prefix-sum)!=mp.end()){
            res=max(res,i-mp[prefix-sum]);
        }
        else if(mp.find(prefix-sum)==mp.end()){
            mp.insert({prefix,i});
        }
    }
    return res;
}
int main(){
    int sum=0;
    int(*func_ptr)(int*,int,int);
    func_ptr=&count;
    DRIVER_CODE("in.txt",func_ptr,sum);
}
