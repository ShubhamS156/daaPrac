#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int find(string str){
    int n=str.length();
    int fi[26],res=INT32_MAX;
    memset(fi,-1,sizeof(fi));
    cout<<"fi[] "<<endl;
    for(int i=0;i<25;i++){
        cout<<fi[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(fi[str[i]-97]==-1){
            fi[str[i]-97]=i;
        }
        else{
            fi[str[i]]=-2;
        }
    }
    cout<<"fi[] after"<<endl;
    for(int i=0;i<25;i++){
        cout<<fi[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<25;i++){
        if(fi[i]>=0){
            res=min(res,fi[i]);
        }
    }
    return res==INT32_MAX?-1:res;
}

int main(){
    string str="ashu";
    cout<<"LeftMost non rep: "<<str[find(str)]<<endl;
}
