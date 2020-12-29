#include<iostream>
#include<fstream>
#include<unordered_map>
using namespace std;

void count(int *arr,int n){
  if(n<=0)
    cout<<"Empty array "<<endl;
  unordered_map<int,int> mp;
  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }
  for(unordered_map<int,int>::iterator ref=mp.begin();ref!=mp.end();ref++){
    cout<<"Key: "<<ref->first<<" Freq: "<<ref->second<<endl;
  }
}
int main(){
  ifstream in("in.txt");
  if(in.is_open()){
    int n;
    in>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      in>>arr[i];
    }
    count(arr,n);
  }
}
