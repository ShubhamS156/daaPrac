#include<iostream>
#include<string>
#include<vector>
using namespace std;

void find(string &str,string &pattern){
    int n=str.length();
    int m=pattern.length();
    for(int i=0;i<n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(str[i+j]!=pattern[j]){
                break;
            }
        }
        if(j==m){
            cout<<i<<" ";
        }
    }
}
int main(){
    string str="abababcd";
    string pattern="abab";
    find(str,pattern);
}
