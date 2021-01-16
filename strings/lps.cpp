#include<iostream>
#include<string>
using namespace std;

/*
 * Make lps array using already computed lps val.
 */

void lps_fill(string &str,int lps[]){
    int i=1, n=str.length(), len=0;
    lps[0]=0;
    while(i<n){
        if(str[i]==str[len]){
            lps[i]=len+1;
            len++;
            i++;
        }
        else{
            if(len==0){
                lps[i]=0;
                i++;
            }
            else{
                len = lps[len-1];
            }
        }
    }
}

int main(){
    string str="aaaa";
    int n=str.length();
    int lps[n];
    lps_fill(str,lps);
    for(int i=0; i<n; i++){
        cout<<lps[i]<<" ";
    }
    cout<<endl;
}
