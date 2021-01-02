#include<iostream>
#include<fstream>
#include<unordered_set>
using namespace std;

int count(int* arr,int n,int *arr2,int m){
  unordered_set<int> hash;
  for(int i=0;i<n;i++){
      hash.insert(arr[i]);
  }
  int res=0;
  for(int i=0;i<m;i++){
      if(hash.find(arr2[i])!=hash.end()){
                res++;
                hash.erase(arr2[i]);
                
     } 
  }
  return res;
}
