#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

/*
 * Given a matrix print it in snake pattern
 */

void snake(vector<int> arr[],int r){
  for(int i=0;i<r;i++){
    if(i%2==0){
      for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
      }
    }
    else{
      for(int j=arr[i].size()-1;j>=0;j--){
        cout<<arr[i][j]<<" ";
      }
    }
    cout<<endl;
  }
}
int main(){
  ifstream in("matrix.txt");
  if(in.is_open()){
    int rows,cols,tmp;
    in>>rows;
    in>>cols;
    vector<int> arr[rows];
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        in>>tmp;
        arr[i].push_back(tmp);
      }
    }
    snake(arr,rows);
  }
}
