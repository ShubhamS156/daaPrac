#include<iostream>
#include<string>
using namespace std;

int left_r(string str){
    int n=str.length();
    int count[26]={0};
    for(int i=0;i<n;i++){
        count[str[i]-97]++;
    }
    //we traverse the string to find the element with freq > 1.
    //return as soon as we get a hit.
    for(int i=0;i<n;i++){
        if(count[str[i]-97]>1){
            return i;
        }
    }
    return -1; //no repeating characters found.
}
int main(){
    string str="eksforgeeks";
    cout<<"LeftMost Repeating "<<str[left_r(str)]<<endl;
}
