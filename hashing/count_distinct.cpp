#include<iostream>
#include<unordered_set>
#include<fstream>
using namespace std;

int count(int *arr,int n){
  if(n<=0)
    return 0;
  unordered_set<int> set;
  for(int i=0;i<n;i++){
    set.insert(arr[i]);
  }
  return set.size();
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
    cout<<"Distinct Elements are: "<<count(arr,n)<<endl;
  }
}
