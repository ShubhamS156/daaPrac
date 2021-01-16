#include<iostream>
#include<string>
using namespace std;

void reverse(string &str,int low,int hi){
    while(low<=hi){
        swap(str[low],str[hi]);
        low++;
        hi--;
    }
}
void rev(string &str){
    int n=str.length();
    int start=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            reverse(str,start,i-1);
            start=i+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}
int main(){
    string str="hi ashu";
    rev(str);
    cout<<str<<endl;
}
